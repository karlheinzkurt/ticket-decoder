#pragma once

#include "Parameters.h"
#include "Detector.h"

#include <opencv2/core.hpp>

#include <memory>
#include <vector>

namespace dip::detection::api
{
  class ResearchDetector : public Detector
  {
    Parameters &parameters;

    ResearchDetector(Parameters &parameters);

  public:
    static std::unique_ptr<Detector> create(Parameters &parameters);

    Result detect(cv::Mat const &image) override;
  };
}
