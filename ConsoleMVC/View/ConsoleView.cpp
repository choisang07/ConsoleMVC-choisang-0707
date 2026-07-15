#include "ConsoleView.h"

#include <iostream>

void ConsoleView::printMenu() const {
    std::cout << "==============================\n";
    std::cout << " ConsoleMVC PoC\n";
    std::cout << "==============================\n";
    std::cout << "[1] 시료 등록\n";
    std::cout << "[2] 시료 목록 조회\n";
    std::cout << "[0] 종료\n";
    std::cout << "선택 > ";
}

void ConsoleView::printSampleList(const std::vector<Sample>& samples) const {
    std::cout << "-- 등록된 시료 목록 (" << samples.size() << "건) --\n";
    for (const auto& sample : samples) {
        std::cout << sample.id << " | " << sample.name << " | 재고 " << sample.stock << "\n";
    }
}

void ConsoleView::printMessage(const std::string& message) const {
    std::cout << message << "\n";
}

std::string ConsoleView::promptCommand() const {
    std::string input;
    std::getline(std::cin, input);
    return input;
}
