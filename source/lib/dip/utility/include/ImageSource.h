#pragma once

#include <lib/utility/include/LoggingFwd.h>

#include <opencv2/core.hpp>

#include <filesystem>
#include <vector>
#include <optional>
#include <map>

namespace dip::utility
{
  struct Source
  {
    std::optional<std::filesystem::path> path;
    std::string annotation;
    cv::Mat image;

    bool isValid() const
    {
      return !image.empty();
    }

    bool isCamera() const
    {
      return !path;
    }
  };

  std::pair<unsigned int, unsigned int> splitStringToPair(std::string input);

  std::map<unsigned int, unsigned int> splitPairToMap(std::pair<unsigned int, unsigned int> input);

  class ImageSource
  {
    ::utility::Logger logger;
    std::filesystem::path const basePath;
    bool const specificFile;
    std::vector<std::filesystem::path> imagePaths;
    unsigned int inputSourceIndex = 0u;
    std::optional<std::filesystem::path> path;
    std::string annotation;
    std::map<unsigned int, unsigned int> partMap;
    std::tuple<unsigned int, unsigned int> parts;
    int rotationDegree;
    unsigned int scaleFactor;

    ImageSource(
        ::utility::LoggerFactory &loggerFactory,
        std::filesystem::path directory,
        unsigned int defaultSource,
        int defaultRotation,
        std::pair<unsigned int, unsigned int> defaultSplit);

    void update();

  public:
    bool isSpecificFile() const;

    std::string getAnnotation() const;

    std::string nextSource();

    std::string previousSource();

    std::string rotateClockwise();

    std::string rotateCounterClockwise();

    std::string togglePart2();

    std::string togglePart4();

    std::string upScale();

    std::string downScale();

    std::string reset();

    Source getSource() const;

    template <typename IteratorT>
    void toString(IteratorT inserter)
    {
      *(inserter++) = std::make_pair("source:", annotation);
      *(inserter++) = std::make_pair("split:", std::to_string(std::get<0>(parts)) + "/" + std::to_string(std::get<1>(parts)));
      *(inserter++) = std::make_pair("rotation:", std::to_string(rotationDegree));
      *(inserter++) = std::make_pair("scale:", std::to_string(scaleFactor));
    }

    static ImageSource create(
        ::utility::LoggerFactory &loggerFactory,
        std::filesystem::path directory,
        unsigned int defaultSource,
        int defaultRotation,
        std::pair<unsigned int, unsigned int> defaultSplit);
  };
}
