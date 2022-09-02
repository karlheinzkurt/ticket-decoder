#pragma once

#include "ContourSetDescriptor.h"

#include "lib/dip/filtering/include/Pipe.h"

#include <opencv2/core.hpp>

#include <memory>
#include <vector>
#include <ostream>
#include <functional>
#include <tuple>

namespace dip::detection::detail
{
  class Pipe
  {
  public:
    using FilterType = std::function<ContourSetDescriptor(ContourSetDescriptor &&)>;
    using PredicateType = std::function<bool(api::Descriptor const &)>;
    using ComparatorType = std::function<bool(api::Descriptor const &, api::Descriptor const &)>;

    static std::vector<api::Descriptor::ContourType> find(cv::Mat const &image);

    static PredicateType areaSmallerThan(int size);

    static std::function<double(api::Descriptor const &)> perimeterTimes(double factor);

    static PredicateType cornersDoesNotEqual(int size);

    static PredicateType emptyImage();

    static PredicateType boundingSquareOutsideOf(cv::Size const &size);

    static PredicateType sideLengthRatioLessThan(double ratio);

    static ComparatorType compareArea(std::function<bool(double, double)> comparator);

    static ComparatorType smallestArea();

    static ComparatorType biggestArea();

    static std::vector<api::Descriptor::AnnotatorType> dimensionString();

    static std::vector<api::Descriptor::AnnotatorType> coordinatesString();

    static FilterType printTo(std::ostream &stream);

    static FilterType sortBy(ComparatorType comparator);

    static FilterType annotateWith(std::vector<std::vector<api::Descriptor::AnnotatorType>> &&annotators);

    static FilterType annotateWith(std::vector<api::Descriptor::AnnotatorType> &&annotators);

    static FilterType removeIf(PredicateType predicate);

    static FilterType removeIfParent();

    static FilterType removeBeyond(int size);

    static FilterType convexHull();

    static FilterType normalizePointOrder();

    static FilterType determineBoundingSquareWith(float scale);

    static FilterType approximateShapeWith(std::function<double(api::Descriptor const &)> epsilonSupplier);

    static FilterType filterImages(std::vector<dip::filtering::pipe::FilterType> &&filters);

    static FilterType refineEdges(double const lengthFactor);

    static FilterType replaceImagesFrom(cv::Mat const &source);

    static FilterType unwarpImagesFrom(cv::Mat const &source, float scale);

    static ContourSetDescriptor filter(ContourSetDescriptor &&descriptors, std::vector<FilterType> &&filters);

    static ContourSetDescriptor filter(ContourSetDescriptor &&descriptors, unsigned int const debugStep, std::vector<FilterType> &&filters);
  };
}
