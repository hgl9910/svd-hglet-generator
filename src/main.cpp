#include "model.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <filesystem>
#include "parser.cpp" // small project: include parser functions directly
// generator functions declared below
void writeHgletTemplate(const Peripheral&, const std::filesystem::path&);
void writeCHeader(const Peripheral&, const std::filesystem::path&);

int main(int argc, char** argv) {
    if (argc < 3) {
        std::cerr << "Usage: generator <svd_fragment.txt> <out_dir>\n";
        return 1;
    }
    std::string inpath = argv[1];
    std::filesystem::path outdir = argv[2];
    auto peripherals = parseSvdFragment(inpath);
    if (peripherals.empty()) {
        std::cerr << "No peripherals found in " << inpath << "\n";
        return 1;
    }
    for (auto& p : peripherals) {
        writeHgletTemplate(p, outdir / "templates");
        writeCHeader(p, outdir);
    }
    return 0;
}
