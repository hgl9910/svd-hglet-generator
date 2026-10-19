#include "model.hpp"
#include <tinyxml2.h>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace tinyxml2;

static std::string readFile(const std::string& path) {
    std::ifstream in(path);
    std::ostringstream ss;
    ss << in.rdbuf();
    return ss.str();
}

static std::string childText(XMLElement* parent, const char* name) {
    if (!parent) return "";
    XMLElement* e = parent->FirstChildElement(name);
    return e && e->GetText() ? std::string(e->GetText()) : std::string();
}

static uint32_t parseHexOrDec(const std::string& s) {
    if (s.find("0x") != std::string::npos || s.find("0X") != std::string::npos) {
        uint32_t v;
        std::stringstream ss;
        ss << std::hex << s;
        ss >> v;
        return v;
    }
    return (uint32_t)std::stoul(s);
}

std::vector<Peripheral> parseSvdFragment(const std::string& path) {
    std::string content = readFile(path);
    // Wrap in a root so XML parser can parse fragments
    std::string wrapped = "<root>\n" + content + "\n</root>";
    XMLDocument doc;
    XMLError err = doc.Parse(wrapped.c_str());
    if (err != XML_SUCCESS) {
        std::cerr << "XML parse error in " << path << ": " << doc.ErrorStr() << "\n";
        return {};
    }
    XMLElement* root = doc.FirstChildElement("root");
    std::vector<Peripheral> peripherals;
    for (XMLElement* p = root->FirstChildElement("peripheral"); p; p = p->NextSiblingElement("peripheral")) {
        Peripheral per;
        per.name = childText(p, "name");
        per.description = childText(p, "description");
        per.groupName = childText(p, "groupName");
        per.baseAddress = parseHexOrDec(childText(p, "baseAddress"));
        XMLElement* regs = p->FirstChildElement("registers");
        if (!regs) {
            // sometimes registers are direct children
            regs = p;
        }
        for (XMLElement* r = regs->FirstChildElement("register"); r; r = r->NextSiblingElement("register")) {
            Register reg;
            reg.name = childText(r, "name");
            reg.displayName = childText(r, "displayName");
            reg.description = childText(r, "description");
            reg.addressOffset = parseHexOrDec(childText(r, "addressOffset"));
            if (childText(r, "size").size()) reg.size = parseHexOrDec(childText(r, "size"));
            reg.access = childText(r, "access");
            if (childText(r, "resetValue").size()) reg.resetValue = parseHexOrDec(childText(r, "resetValue"));
            XMLElement* fields = r->FirstChildElement("fields");
            if (fields) {
                for (XMLElement* f = fields->FirstChildElement("field"); f; f = f->NextSiblingElement("field")) {
                    Field field;
                    field.name = childText(f, "name");
                    field.description = childText(f, "description");
                    if (childText(f, "bitOffset").size()) field.bitOffset = parseHexOrDec(childText(f, "bitOffset"));
                    if (childText(f, "bitWidth").size()) field.bitWidth = parseHexOrDec(childText(f, "bitWidth"));
                    reg.fields.push_back(field);
                }
            }
            per.registers.push_back(reg);
        }
        peripherals.push_back(per);
    }
    return peripherals;
}
