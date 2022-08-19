
#include "../include/Utility.h"

#include <filesystem>
#include <random>
#include <iomanip>
#include <sstream>
#include <regex>

namespace Utility
{
  std::string uniqueFilename(std::string directory, std::string extension)
  {
    return uniqueFilename(directory, "", extension);
  }

  std::string uniqueFilename(std::string directory, std::string postfix, std::string extension)
  {
    return Utility::ensureDirectory(directory) + "/" + Utility::uniqueBasename() + postfix + "." + extension;
  }

  std::string ensureDirectory(std::string name)
  {
    if (!std::filesystem::is_directory(name))
    {
      std::filesystem::create_directory(name);
    }
    return name;
  }

  static std::random_device random_device;
  static std::mt19937 generator(random_device());
  static std::uniform_int_distribution<> distribution(0);

  std::string uniqueBasename()
  {
    std::ostringstream os;
    os << std::setw(10) << std::setfill('0') << std::hex << distribution(generator);
    return os.str();
  }

  std::vector<std::filesystem::path> scanForImages(std::filesystem::path directory)
  {
    auto result = std::vector<std::filesystem::path>{};
    auto const extensionRegex = std::regex("[.](png|jpg|jpeg)", std::regex_constants::icase);
    auto const hiddenRegex = std::regex("[.].*", std::regex_constants::icase);
    for (auto const &entry : std::filesystem::recursive_directory_iterator(directory))
    {
      auto const extension = entry.path().extension().string();
      auto const basename = entry.path().filename().string();
      if (std::regex_match(extension, extensionRegex) && !std::regex_match(basename, hiddenRegex))
      {
        result.push_back(entry.path());
      }
    }
    return result;
  }

  unsigned int safeDecrement(unsigned int &value)
  {
    return safeDecrement(value, 1);
  }

  unsigned int safeDecrement(unsigned int &value, unsigned int decrement)
  {
    if (decrement >= value)
    {
      value = 0;
      return value;
    }
    return value -= decrement;
  }

  unsigned int safeIncrement(unsigned int &value, unsigned int max)
  {
    return safeIncrement(value, 1, max);
  }

  unsigned int safeIncrement(unsigned int &value, unsigned int increment, unsigned int max)
  {
    if (value > max)
    {
      value = max;
      return value;
    }
    if (value < max)
    {
      return value += increment;
    }
    return value;
  }

  unsigned int rotate(unsigned int &value, unsigned int max)
  {
    if (value++ >= max)
    {
      value = 0;
    }
    return value;
  }
}
