#pragma once

#include <opencv2/core.hpp>

namespace dip::utility
{
  static auto const white = cv::Scalar(255, 255, 255);
  static auto const blue = cv::Scalar(255, 0, 0);
  static auto const green = cv::Scalar(0, 255, 0);
  static auto const red = cv::Scalar(0, 0, 255);
  static auto const yellow = cv::Scalar(0, 255, 255);
  static auto const cyan = cv::Scalar(255, 255, 0);
}
