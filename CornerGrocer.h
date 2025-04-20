// CornerGrocer.h
#ifndef CORNERGROCER_H
#define CORNERGROCER_H

#include <string>
#include <map>

class CornerGrocer {
public:
    CornerGrocer(const std::string& filename);
    int GetItemFrequency(const std::string& item) const;
    void PrintAllFrequencies() const;
    void PrintHistogram() const;
    void SaveFrequenciesToFile(const std::string& outputFilename) const;

private:
    std::map<std::string, int> itemFrequency;
    void LoadDataFromFile(const std::string& filename);
};

#endif

