#include "../include/ImageProcessor.h"

#include <opencv2/imgproc.hpp>

#include <iostream>
#include <algorithm>

static cv::Mat smooth(cv::Mat &&input, int const kernelSize)
{
  cv::Mat output;
  cv::GaussianBlur(input, output, cv::Size(kernelSize, kernelSize), 0);
  return output;
}

static cv::Mat binarize(cv::Mat &&input, int const blockSize, int const substractFromMean)
{
  // Otsu is probably faster because simpler than adaptive threshold, but global theshold is
  // only useful when input image is in well defined range and does not have huge
  // light changes globally.
  // So we could make this a parameter to choose between camera image and properly
  // scanned image to make a compromise between speed and quality of input when reasonable.

  // cv::threshold(blurred, binarized, 0, 255, cv::THRESH_BINARY + cv::THRESH_OTSU);

  cv::Mat output;
  cv::adaptiveThreshold(input, output, 255, cv::ADAPTIVE_THRESH_GAUSSIAN_C, cv::THRESH_BINARY, blockSize, substractFromMean);
  return output;
}

static cv::Mat equalize(cv::Mat &&input)
{
  cv::Mat output;
  cv::equalizeHist(input, output);
  return output;
}

static auto const clip1Size8x8Clahe = cv::createCLAHE(1, cv::Size(8, 8));

static cv::Mat equalize(cv::Mat &&input, cv::CLAHE &clahe)
{
  cv::Mat output;
  clahe.apply(input, output);
  return output;
}

static auto const rect7x7Kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(7, 7));
static auto const rect5x5Kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(5, 5));
static auto const rect3x3Kernel = cv::getStructuringElement(cv::MORPH_RECT, cv::Size(3, 3));

static cv::Mat open(cv::Mat &&input, cv::Mat const &kernel, int count)
{
  cv::Mat output;
  cv::morphologyEx(input, output, cv::MorphTypes::MORPH_OPEN, kernel, cv::Point(-1, -1), count);
  return output;
}

static cv::Mat close(cv::Mat &&input, cv::Mat const &kernel, int count)
{
  cv::Mat output;
  cv::morphologyEx(input, output, cv::MorphTypes::MORPH_CLOSE, kernel, cv::Point(-1, -1), count);
  return output;
}

static cv::Mat rotate(cv::Mat input, float angle)
{
  auto const center = cv::Point2f{(input.cols - 1) / 2.f, (input.rows - 1) / 2.f};
  auto const rotation = cv::getRotationMatrix2D(center, angle, 0.82);
  cv::Mat output;
  cv::warpAffine(input, output, rotation, input.size(), 1, 0, input.channels() == 1 ? cv::Scalar(255) : cv::Scalar(255, 255, 255));
  return output;
}

static cv::Mat process(cv::Mat const &input, std::vector<std::function<cv::Mat(cv::Mat &&)>> &&filters)
{
  cv::Mat gray;
  cv::cvtColor(input, gray, cv::COLOR_RGB2GRAY);
  std::for_each(filters.begin(), filters.end(), [&gray](auto const &filter)
                { gray = filter(std::move(gray)); });
  return gray;
}

cv::Mat ImageProcessor::preProcess(cv::Mat const &input)
{
  return process(input, {[](cv::Mat &&input)
                         { return equalize(std::move(input), *clip1Size8x8Clahe); },
                         [](cv::Mat &&input)
                         { return smooth(std::move(input), 7); },
                         [](cv::Mat &&input)
                         { return binarize(std::move(input), 13, 1); },
                         [](cv::Mat &&input)
                         { return open(std::move(input), rect3x3Kernel, 2); },
                         [](cv::Mat &&input)
                         { return close(std::move(input), rect3x3Kernel, 1); }});
}
