#include "SampleController.h"

#include <iostream>

SampleController::SampleController(SampleModel& model, ConsoleView& view)
    : model_(model), view_(view) {
}

void SampleController::run() {
    bool running = true;
    while (running) {
        view_.printMenu();
        const std::string command = view_.promptCommand();

        if (!std::cin) {
            // 입력 스트림이 종료(EOF)되면 더 이상 명령을 받을 수 없으므로 종료한다.
            break;
        }

        if (command == "1") {
            handleAddSample();
        } else if (command == "2") {
            handleListSamples();
        } else if (command == "0") {
            running = false;
        } else {
            view_.printMessage("잘못된 입력입니다.");
        }
    }
}

void SampleController::handleAddSample() {
    std::cout << "시료 ID > ";
    std::string id;
    std::getline(std::cin, id);

    std::cout << "시료 이름 > ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "초기 재고 > ";
    std::string stockInput;
    std::getline(std::cin, stockInput);

    int stock = 0;
    try {
        stock = std::stoi(stockInput);
    } catch (...) {
        stock = 0;
    }

    model_.addSample(Sample{ id, name, stock });
    view_.printMessage("시료가 등록되었습니다.");
}

void SampleController::handleListSamples() {
    view_.printSampleList(model_.getSamples());
}
