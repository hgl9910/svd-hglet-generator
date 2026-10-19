#pragma once
#include <string>
#include <vector>
#include <cstdint>

struct Field {
    std::string name;
    std::string description;
    uint32_t bitOffset = 0;
    uint32_t bitWidth = 0;
};

struct Register {
    std::string name;
    std::string displayName;
    std::string description;
    uint32_t addressOffset = 0;
    uint32_t size = 0;
    std::string access;
    uint32_t resetValue = 0;
    std::vector<Field> fields;
};

struct Peripheral {
    std::string name;
    std::string description;
    std::string groupName;
    uint32_t baseAddress = 0;
    std::vector<Register> registers;
};
