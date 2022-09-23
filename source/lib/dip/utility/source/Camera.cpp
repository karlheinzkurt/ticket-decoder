
#include "../include/Camera.h"

#include <opencv2/highgui.hpp>

#include <stdexcept>

namespace dip::utility
{
  static auto camera = std::unique_ptr<cv::VideoCapture>();

  std::unique_ptr<cv::VideoCapture> create(unsigned int device)
  {
    auto capture = std::make_unique<cv::VideoCapture>(device);
    if (!capture->isOpened())
    {
      throw std::runtime_error(std::string("Cannot open camera device: ") + std::to_string(device));
    }
    return capture;
  }

  cv::Mat readCamera(unsigned int device)
  {
    if (!camera)
    {
      camera = create(device);
    }
    cv::Mat image;
    (*camera) >> image;
    return image;
  }

  void releaseCamera()
  {
    if (camera)
    {
      camera->release();
      camera.release();
    }
  }
}