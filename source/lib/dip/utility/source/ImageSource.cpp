
#include "../include/ImageSource.h"

#include "lib/utility/include/FileSystem.h"
#include "lib/utility/include/Utility.h"

#include "lib/dip/utility/include/Camera.h"
#include "lib/dip/utility/include/ImageCache.h"
#include "lib/dip/filtering/include/Transform.h"

namespace dip::utility
{

  ImageSource::ImageSource(std::filesystem::path directory, unsigned int defaultSource)
      : imagePaths(::utility::scanForImages(directory)),
        inputSourceIndex(defaultSource > imagePaths.size() // 0 is camera
                             ? imagePaths.size()
                             : defaultSource),
        path(std::nullopt),
        annotation(),
        partMap({{2u, 0u}, {4u, 2u}}),
        parts(),
        rotationDegree(0),
        scaleFactor(100u)
  {
    update();
  }

  void ImageSource::update()
  {
    path = inputSourceIndex == 0 || imagePaths.empty()
               ? std::nullopt
               : std::make_optional(imagePaths[std::min((unsigned int)(imagePaths.size()), inputSourceIndex) - 1]);
    annotation = path ? path->stem().string() : std::string("camera");
    parts = *std::max_element(partMap.begin(), partMap.end(),
                              [](auto const &a, auto const &b)
                              { return (std::min(1u, a.second) * a.first) < (std::min(1u, b.second) * b.first); });
  }

  std::string ImageSource::nextSource()
  {
    ::utility::safeIncrement(inputSourceIndex, imagePaths.size());
    update();
    return path ? path->filename() : "camera";
  }

  std::string ImageSource::previousSource()
  {
    ::utility::safeDecrement(inputSourceIndex, 0);
    update();
    return path ? path->filename() : "camera";
  }

  std::string ImageSource::rotateClockwise()
  {
    return std::to_string(::utility::rotate(rotationDegree, -1, 360));
  }

  std::string ImageSource::rotateCounterClockwise()
  {
    return std::to_string(::utility::rotate(rotationDegree, 1, 360));
  }

  std::string ImageSource::togglePart2()
  {
    ::utility::rotate(partMap.at(2), 2);
    update();
    return std::to_string(std::get<0>(parts)) + "/" + std::to_string(std::get<1>(parts));
  }

  std::string ImageSource::togglePart4()
  {
    ::utility::rotate(partMap.at(4), 4);
    update();
    return std::to_string(std::get<0>(parts)) + "/" + std::to_string(std::get<1>(parts));
  }

  std::string ImageSource::upScale()
  {
    return std::to_string(::utility::safeIncrement(scaleFactor, 200));
  }

  std::string ImageSource::downScale()
  {
    return std::to_string(::utility::safeDecrement(scaleFactor, 50));
  }

  Source ImageSource::getSource() const
  {
    auto image = path ? dip::utility::getImage(*path) : dip::utility::readCamera();
    if (path)
    {
      dip::utility::releaseCamera();
      if (std::get<1>(parts) != 0)
      {
        image = dip::filtering::split(image, std::get<0>(parts), std::get<1>(parts));
      }
      if (rotationDegree != 0)
      {
        image = dip::filtering::rotate(image, (float)rotationDegree);
      }
      if (scaleFactor != 100)
      {
        image = dip::filtering::scale(image, scaleFactor * 0.01f);
      }
    }
    return Source{path, annotation, std::move(image)};
  }

  ImageSource ImageSource::create(std::filesystem::path directory, unsigned int defaultSource)
  {
    return ImageSource(directory, defaultSource);
  }
}
