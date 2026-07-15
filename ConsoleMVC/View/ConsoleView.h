#pragma once

#include <string>
#include <vector>

#include "../Model/SampleModel.h"

class ConsoleView {
public:
    void printMenu() const;
    void printSampleList(const std::vector<Sample>& samples) const;
    void printMessage(const std::string& message) const;
    std::string promptCommand() const;
};
