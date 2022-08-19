#pragma once

#include <opencv2/core.hpp>

namespace dip
{

  cv::Mat toGray(cv::Mat const &input);

  cv::Mat rotate(cv::Mat const &input, float angle);

  cv::Rect split(cv::Size const &size, unsigned int partCount, unsigned int part);

  cv::Mat split(cv::Mat const &image, unsigned int partCount, unsigned int part);

}
