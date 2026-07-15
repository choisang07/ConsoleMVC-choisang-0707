#include "SampleModel.h"

void SampleModel::addSample(const Sample& sample) {
    samples_.push_back(sample);
}

const std::vector<Sample>& SampleModel::getSamples() const {
    return samples_;
}
