// file_io.cpp
#include "file_io.h"
#include <fstream>
#include <iostream>

void readFile(const std::string &filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
    }
    // Reading logic here...
}

void writeFile(const std::string &filename, const std::string &data) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
    }
    file << data;
}