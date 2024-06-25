#pragma once

#include "DetectorType.h"
#include "Result.h"
#include "DetectorOptions.h"

#include "lib/utility/include/LoggingFwd.h"

#include <opencv2/core.hpp>

namespace dip::detection::api
{
  class Detector
  {
  public:
    virtual ~Detector() = default;

    virtual Result detect(cv::Mat const &image) = 0;

    virtual std::string getName() = 0;

    static std::unique_ptr<Detector> create(::utility::LoggerFactory &loggerFactory, DetectorType type);

    static std::unique_ptr<Detector> create(::utility::LoggerFactory &loggerFactory, DetectorType type, DetectorOptions options);

    static std::vector<std::shared_ptr<Detector>> createAll(::utility::LoggerFactory &loggerFactory);

    static std::vector<std::shared_ptr<Detector>> createAll(::utility::LoggerFactory &loggerFactory, DetectorOptions options);
  };
}
