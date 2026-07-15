#pragma once

#include "../Model/SampleModel.h"
#include "../View/ConsoleView.h"

class SampleController {
public:
    SampleController(SampleModel& model, ConsoleView& view);

    void run();

private:
    void handleAddSample();
    void handleListSamples();

    SampleModel& model_;
    ConsoleView& view_;
};
