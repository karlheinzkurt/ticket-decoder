
#include <opencv2/core.hpp>

#include <memory>

#include "Detector.h"

class ClassifierDetector : public Detector
{
  struct Internal;
  std::shared_ptr<Internal> internal; // by intention a shared_ptr 2 allow forward declared type here

public:
  ClassifierDetector();

  DetectionResult detect(cv::Mat const &image);
};