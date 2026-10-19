#include "model.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

static string sanitize(const string& s) {
    string out;
    for (char c : s) {
        if (isalnum((unsigned char)c) || c=='_') out.push_back(c);
        else out.push_back('_');
    }
    return out;
}

void writeHgletTemplate(const Peripheral& per, const fs::path& outDir) {
    fs::create_directories(outDir);
    string fname = (outDir / (per.name + ".ht")).string();
    ofstream o(fname);
    o << "// HGLETL template (Mustache-like) for peripheral " << per.name << "\n";
    o << "peripheral_name: {{peripheral.name}}\n";
    o << "base_address: {{peripheral.baseAddress}}\n\n";
    o << "{{#registers}}\n";
    o << "register:\n";
    o << "  name: {{name}}\n";
    o << "  addressOffset: {{addressOffset}}\n";
    o << "  access: {{access}}\n";
    o << "  resetValue: {{resetValue}}\n";
    o << "  fields:\n";
    o << "  {{#fields}}\n";
    o << "    - name: {{name}}\n";
    o << "      bitOffset: {{bitOffset}}\n";
    o << "      bitWidth: {{bitWidth}}\n";
    o << "  {{/fields}}\n";
    o << "{{/registers}}\n";
    o.close();
    cout << "Wrote template: " << fname << "\n";
}

static uint32_t maskFor(uint32_t width) {
    if (width >= 32) return 0xFFFFFFFFu;
    return ((1u << width) - 1u);
}

void writeCHeader(const Peripheral& per, const fs::path& outDir) {
    fs::create_directories(outDir / "generated");
    string fname = (outDir / "generated" / (per.name + ".h")).string();
    ofstream o(fname);
    o << "#pragma once\n";
    o << "#include <cstdint>\n\n";
    o << "// Generated from peripheral: " << per.name << "\n";
    o << "namespace " << sanitize(per.name) << " {\n\n";
    o << "constexpr std::uint32_t BASE = 0x" << std::hex << per.baseAddress << std::dec << ";\n\n";
    for (auto const& reg : per.registers) {
        o << "// " << reg.name << " (" << reg.description << ")\n";
        o << "constexpr std::uint32_t " << sanitize(reg.name) << "_OFFSET = 0x" << std::hex << reg.addressOffset << std::dec << ";\n";
        o << "constexpr std::uint32_t " << sanitize(reg.name) << " = BASE + " << sanitize(reg.name) << "_OFFSET;\n";
        for (auto const& f : reg.fields) {
            uint32_t mask = maskFor(f.bitWidth);
            o << "constexpr std::uint32_t " << sanitize(reg.name) << "_" << sanitize(f.name) << "_Pos = " << f.bitOffset << "u;\n";
            o << "constexpr std::uint32_t " << sanitize(reg.name) << "_" << sanitize(f.name) << "_Mask = 0x" << std::hex << (mask << f.bitOffset) << std::dec << "u;\n";
        }
        o << "\n";
    }
    o << "} // namespace " << sanitize(per.name) << "\n";
    o.close();
    cout << "Wrote generated header: " << fname << "\n";
}
