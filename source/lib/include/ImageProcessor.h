#pragma once

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

#include <functional>

/* Minimal abstraction 4 raw opencv image proc make using code concentrating
   onto the most important key points. Boiler plate code and statically
   set parameters are hidden behind this minimal interface allowing
   one liner filter chaining as well.

   This is explicitly NOT hiding all details, it's just to make usage as
   simple as possible to keep the mind free 4 domain details.
*/
class ImageProcessor
{
public:
  using FilterType = std::function<cv::Mat(cv::Mat &&)>;

  static cv::Mat smooth(cv::Mat &&input, int const kernelSize);

  static cv::Mat binarize(cv::Mat &&input, int const blockSize, int const substractFromMean);

  static cv::Mat equalize(cv::Mat &&input);

  static cv::Mat equalize(cv::Mat &&input, cv::CLAHE &clahe);

  static cv::Mat open(cv::Mat &&input, cv::Mat const &kernel, int count);

  static cv::Mat close(cv::Mat &&input, cv::Mat const &kernel, int count);

  cv::Mat process(cv::Mat const &input, std::vector<FilterType> &&filters) const;
};
