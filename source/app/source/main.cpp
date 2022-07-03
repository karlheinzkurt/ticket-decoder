
#include "lib/include/ImageProcessor.h"
#include "lib/include/SquareDetector.h"
#include "lib/include/ContourDetectorParameters.h"
#include "lib/include/ClassifierDetector.h"
#include "lib/include/Utility.h"
#include "lib/include/CvUtility.h"
#include "lib/include/DeviceController.h"
#include "lib/include/KeyMapper.h"

#include "lib/aztec/include/BarcodeDecodingLevel.h"
#include "lib/aztec/include/BarcodeDecodingResult.h"
#include "lib/aztec/include/AztecDecoder.h"

#include "lib/uic918/include/Interpreter.h"

#include <opencv2/highgui.hpp>

#include <memory>
#include <iostream>
#include <filesystem>
#include <numeric>
#include <algorithm>
#include <map>

int main(int argc, char **argv)
{
   // auto controller = DeviceController{};

   auto const name = "Screen";
   cv::namedWindow(name);

   auto const paths = Utility::scanForImages("../../images/");
   auto parts = std::map<unsigned int, unsigned int>{{2u, 0u}, {4u, 2u}};

   auto quit = false, dump = false, useContourDetector = true, pure = false;
   auto inputFileIndex = 1u;
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
       {'d', [&](){ return "d: " + std::to_string(useContourDetector = !useContourDetector); }},
       {'p', [&](){ return "p: " + std::to_string(pure = !pure); }},
       {'2', [&](){ return "2: " + std::to_string(Utility::rotate(parts.at(2), 2)); }},
       {'4', [&](){ return "4: " + std::to_string(Utility::rotate(parts.at(4), 4)); }},
       {' ', [&](){ dump = true; return "dump"; }},
       {27,  [&](){ quit = true; return "quit"; }},
   }); // clang-format on

   for (int key = cv::waitKey(1); !quit; key = cv::waitKey(1))
   {
      keyMapper.handle(key, std::cout);

      cv::Mat input;
      if (inputFileIndex == 0 && !paths.empty())
      {
         input = Camera::getImage();
      }
      else
      {
         Camera::release();
         auto const index = std::min((unsigned int)(paths.size()), inputFileIndex) - 1;
         input = cv::imread(paths[index].string(), cv::IMREAD_COLOR);
      }

      if (input.empty())
      {
         continue;
      }

      auto const [partCount, part] = *std::max_element(parts.begin(), parts.end(), [](auto const &a, auto const &b)
                                                       { return (std::min(1u, a.second) * a.first) < (std::min(1u, b.second) * b.first); });
      if (part > 0)
      {
         input = input(Splitter::getPart(input.size(), partCount, part)).clone();
      }

      auto &contourDetector = useContourDetector ? *squareDetector : *classifierDetector;
      auto contourDetectorResult = contourDetector.detect(input);

      std::vector<BarcodeDecodingResult> barcodeDecodingResults;
      std::transform(contourDetectorResult.contours.begin(),
                     contourDetectorResult.contours.end(),
                     std::inserter(barcodeDecodingResults, barcodeDecodingResults.begin()),
                     [&](auto const &descriptor)
                     { 
                        if (dump) {
                           cv::imwrite(Utility::uniqueFilename("out", "_detected", "jpg"), descriptor.image);
                        }
                        return BarcodeDecodingResult::visualize(AztecDecoder::decode(descriptor, pure), std::cout); });

      input = contourDetectorResult.visualize(std::move(input));
      auto output = std::reduce(barcodeDecodingResults.begin(),
                                barcodeDecodingResults.end(),
                                std::move(input),
                                [](auto &&image, BarcodeDecodingResult const &result)
                                {
                                   if (result.level == BarcodeDecodingLevel::Decoded)
                                   {
                                      auto const fields = Interpreter::interpretRaw(result.payload);
                                      auto const text = fields.at("U_HEAD.uniqueTicketKey").value + ", " + fields.at("0080BL.fieldS028").value;
                                      cv::putText(image, text, cv::Point(0, 70), cv::FONT_HERSHEY_SIMPLEX, 1., cv::Scalar(0, 0, 255), 2);
                                   }
                                   return result.visualize(std::move(image));
                                });

      cv::imshow(name, output);

      if (dump)
      {
         dump = false;
         cv::imwrite(Utility::uniqueFilename("out", "jpg"), output);
      }
   }
   cv::destroyAllWindows();
   return 0;
}
