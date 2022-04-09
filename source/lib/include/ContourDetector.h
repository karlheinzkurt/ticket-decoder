#pragma once

#include "ContourDescriptor.h"

#include <opencv2/core.hpp>

#include <memory>
#include <vector>
#include <ostream>
#include <functional>
#include <tuple>

class ContourDetector
{
public:
  using FilterType = std::function<std::vector<ContourDescriptor>(std::vector<ContourDescriptor> &&)>;

  static std::vector<double> lineLengths(ContourDescriptor::ContourType const &contour, bool sort);

  static std::vector<ContourDescriptor> printTo(std::vector<ContourDescriptor> &&descriptors, std::ostream &stream);

  static std::vector<ContourDescriptor> annotate(std::vector<ContourDescriptor> &&descriptors, std::function<std::tuple<std::string, std::vector<std::string>>(int, ContourDescriptor &)> annotator);

  static std::vector<ContourDescriptor> removeIf(std::vector<ContourDescriptor> &&descriptors, std::function<bool(ContourDescriptor const &)> predicate);

  static std::vector<ContourDescriptor> removeBeyond(std::vector<ContourDescriptor> &&descriptors, int size);

  static std::vector<ContourDescriptor> convexHull(std::vector<ContourDescriptor> &&descriptors);

  static std::vector<ContourDescriptor> sortBy(std::vector<ContourDescriptor> &&descriptors, std::function<bool(ContourDescriptor const &, ContourDescriptor const &)> comparator);

  static std::vector<ContourDescriptor> approximateShape(std::vector<ContourDescriptor> &&descriptors, std::function<double(ContourDescriptor const &)> epsilonSupplier);

  static std::vector<ContourDescriptor> process(std::vector<ContourDescriptor> &&descriptors, std::vector<FilterType> &&filters);
};