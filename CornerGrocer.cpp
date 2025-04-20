#include "CornerGrocer.h"
#include <fstream>
#include <iostream>

CornerGrocer::CornerGrocer(const std::string& filename) {
    LoadDataFromFile(filename);
}

void CornerGrocer::LoadDataFromFile(const std::string& filename) {
    std::ifstream file(filename);
    std::string item;

    while (file >> item) {
        ++itemFrequency[item];
    }
}

int CornerGrocer::GetItemFrequency(const std::string& item) const {
    auto it = itemFrequency.find(item);
    return (it != itemFrequency.end()) ? it->second : 0;
}

void CornerGrocer::PrintAllFrequencies() const {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " " << pair.second << std::endl;
    }
}

void CornerGrocer::PrintHistogram() const {
    for (const auto& pair : itemFrequency) {
        std::cout << pair.first << " ";
        std::cout << std::string(pair.second, '*') << std::endl;
    }
}

void CornerGrocer::SaveFrequenciesToFile(const std::string& outputFilename) const {
    std::ofstream outFile(outputFilename);
    for (const auto& pair : itemFrequency) {
        outFile << pair.first << " " << pair.second << std::endl;
    }
}
