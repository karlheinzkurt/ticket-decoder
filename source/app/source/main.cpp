
#include "lib/include/ImageProcessor.h"
#include "lib/include/SquareDetector.h"
#include "lib/include/ContourDetectorParameters.h"
#include "lib/include/ClassifierDetector.h"
#include "lib/include/Utility.h"
#include "lib/include/CvUtility.h"
#include "lib/include/DeviceController.h"
#include "lib/include/KeyMapper.h"

#include "lib/dip/include/Transform.h"

#include "lib/aztec/include/BarcodeDecodingLevel.h"
#include "lib/aztec/include/BarcodeDecodingResult.h"
#include "lib/aztec/include/AztecDecoder.h"

#include "lib/uic918/api/include/Interpreter.h"

#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>

#include <memory>
#include <iostream>
#include <filesystem>
#include <numeric>
#include <algorithm>
#include <map>
#include <sstream>
#include <fstream>

int main(int argc, char **argv)
{
   // auto controller = DeviceController{};

   auto const name = "Screen";
   cv::namedWindow(name);

   auto const paths = Utility::scanForImages("../../images/");
   auto parts = std::map<unsigned int, unsigned int>{{2u, 0u}, {4u, 2u}};

   auto quit = false, dump = true, useContourDetector = true, pure = false;
   auto inputFileIndex = 1u, rotationDegree = 0u;
   auto inputAnnotation = std::optional<std::string>();
   auto parameters = ContourDetectorParameters{7, 17};

   auto squareDetector = SquareDetector::create(parameters);
   auto classifierDetector = ClassifierDetector::create();
   auto keyMapper = KeyMapper( // clang-format off
   {    
       {'i', [&](){ return "i: " + std::to_string(++parameters.imageProcessingDebugStep); }},
       {'I', [&](){ return "I: " + std::to_string(Utility::safeDecrement(parameters.imageProcessingDebugStep)); }},
       {'c', [&](){ return "c: " + std::to_string(++parameters.contourDetectorDebugStep); }},
       {'C', [&](){ return "C: " + std::to_string(Utility::safeDecrement(parameters.contourDetectorDebugStep)); }},
       {'f', [&](){ return "f: " + std::to_string(Utility::safeIncrement(inputFileIndex, paths.size())); }},
       {'F', [&](){ return "F: " + std::to_string(Utility::safeDecrement(inputFileIndex)); }},
       {'r', [&](){ return "r: " + std::to_string(Utility::safeIncrement(rotationDegree, 5, 360)); }},
       {'R', [&](){ return "R: " + std::to_string(Utility::safeDecrement(rotationDegree, 5)); }},
       {'d', [&](){ return "d: " + std::to_string(useContourDetector = !useContourDetector); }},
       {'p', [&](){ return "p: " + std::to_string(pure = !pure); }},
       {'2', [&](){ return "2: " + std::to_string(Utility::rotate(parts.at(2), 2)); }},
       {'4', [&](){ return "4: " + std::to_string(Utility::rotate(parts.at(4), 4)); }},
       {' ', [&](){ dump = !dump; return "dump: " + std::to_string(dump); }},
       {27,  [&](){ quit = true; return "quit: " + std::to_string(quit); }},
   }); // clang-format on

   for (int key = cv::waitKey(1); !quit; key = cv::waitKey(1))
   {
      keyMapper.handle(key, std::cout);

      auto const inputPath = inputFileIndex == 0 || paths.empty()
                                 ? std::nullopt
                                 : std::make_optional(paths[std::min((unsigned int)(paths.size()), inputFileIndex) - 1]);

      cv::Mat input;
      if (inputPath)
      {
         Camera::release();
         inputAnnotation = inputPath->filename();
         input = cv::imread(inputPath->string(), cv::IMREAD_COLOR);
      }
      else
      {
         inputAnnotation.reset();
         input = Camera::getImage();
      }

      if (input.empty())
      {
         continue;
      }

      auto const [partCount, part] = *std::max_element(
          parts.begin(),
          parts.end(),
          [](auto const &a, auto const &b)
          { return (std::min(1u, a.second) * a.first) < (std::min(1u, b.second) * b.first); });

      if (part > 0)
      {
         input = dip::split(input, partCount, part);
      }

      if (rotationDegree > 0)
      {
         input = dip::rotate(input, (float)rotationDegree);
      }

      auto &contourDetector = useContourDetector ? *squareDetector : *classifierDetector;
      auto contourDetectorResult = contourDetector.detect(input);

      std::vector<BarcodeDecodingResult> barcodeDecodingResults;
      std::transform(contourDetectorResult.contours.begin(),
                     contourDetectorResult.contours.end(),
                     std::inserter(barcodeDecodingResults, barcodeDecodingResults.begin()),
                     [&](auto const &descriptor)
                     { 
                        auto result = AztecDecoder::decode(descriptor, pure);
                        if (dump) 
                        {
                           auto const outputPath = std::filesystem::path("out")
                                 .append((inputPath ? inputPath->stem().string() : "camera")).string();
                           if (result.level == BarcodeDecodingLevel::Decoded)
                           {
                              std::ofstream{outputPath + ".raw", std::ios::binary}
                                 .write((char const *)&(result.payload[0]), result.payload.size());
                           } 
                           if (!descriptor.image.empty()) 
                           {
                              auto imageOutputPath = outputPath;
                              switch (result.level) 
                              {
                                 case BarcodeDecodingLevel::Decoded: imageOutputPath += "_decoded"; break;
                                 case BarcodeDecodingLevel::Detected: imageOutputPath += "_detected"; break;
                                 default: imageOutputPath += "_failed"; break;
                              }
                              cv::imwrite(imageOutputPath + ".jpg", descriptor.image);
                           }
                        }
                        return BarcodeDecodingResult::visualize(std::move(result), std::cout); });

      input = contourDetectorResult.visualize(std::move(input));
      auto output = std::reduce(barcodeDecodingResults.begin(),
                                barcodeDecodingResults.end(),
                                std::move(input),
                                [](auto &&image, BarcodeDecodingResult const &result)
                                {
                                   if (result.level == BarcodeDecodingLevel::Decoded)
                                   {
                                      auto const json = uic918::Interpreter::interpretPretty(result.payload);
                                      if (json)
                                      {
                                         cv::putText(image, *json, cv::Point(0, 140), cv::FONT_HERSHEY_SIMPLEX, 1., cv::Scalar(0, 0, 255), 2);
                                      }
                                   }
                                   return result.visualize(std::move(image));
                                });
      if (inputAnnotation)
      {
         cv::putText(output, inputAnnotation.value(), cv::Point(0, 70), cv::FONT_HERSHEY_SIMPLEX, 1., cv::Scalar(0, 0, 255), 2);
      }

      cv::imshow(name, output);
   }
   cv::destroyAllWindows();
   return 0;
}
