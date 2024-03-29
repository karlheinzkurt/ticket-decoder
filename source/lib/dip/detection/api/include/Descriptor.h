#pragma once

#include <opencv2/core.hpp>

#include <vector>
#include <string>
#include <optional>

namespace dip::detection::api
{
  struct Descriptor
  {
    using ContourType = std::vector<cv::Point>;
    using AnnotationType = std::tuple<cv::Point, std::string>;
    using AnnotatorType = std::function<AnnotationType(Descriptor const &)>;

    unsigned int id;

    ContourType contour;
    cv::Rect square;
    cv::Mat image;

    std::vector<AnnotatorType> annotators;

    std::string toString() const;

    std::vector<AnnotationType> evaluateAnnotations() const;

    Descriptor clone() const
    {
      auto c = *this;
      c.image = image.clone();
      return c;
    }

    static std::vector<Descriptor> fromContours(std::vector<ContourType> &&contours);

    static std::vector<Descriptor> fromRects(std::vector<cv::Rect> &&rects);

    static std::vector<ContourType> toContours(std::vector<Descriptor> &&descriptors);
  };
}
