#pragma once

#include <string>
#include <vector>

struct Sample {
    std::string id;
    std::string name;
    int stock;
};

class SampleModel {
public:
    void addSample(const Sample& sample);
    const std::vector<Sample>& getSamples() const;

private:
    std::vector<Sample> samples_;
};
