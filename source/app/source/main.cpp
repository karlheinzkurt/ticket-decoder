
#include "lib/include/ImageProcessor.h"
#include "lib/include/ContourDetector.h"
#include "lib/include/ClassifierDetector.h"
#include "lib/include/Utility.h"

#include <opencv2/highgui.hpp>

#include <memory>
#include <iostream>

int main(int argc, char **argv)
{
   auto const name = "Screen";
   cv::namedWindow(name);
   cv::VideoCapture camera(0);
   if (!camera.isOpened())
   {
      std::cout << "Cannot open camera" << std::endl;
      return -1;
   }

   auto visualizeOriginal = true;
   cv::Mat input;
   auto const processor = std::make_unique<ImageProcessor>();
   auto const detector = std::make_unique<ContourDetector>(*processor);
   for (int key = cv::waitKey(1); key != 27 /* ESC*/; key = cv::waitKey(1))
   {
      camera >> input;
      auto detected = detector->detect(input);

      if (key == 'v')
      {
         visualizeOriginal = !visualizeOriginal;
      }
      auto &output = visualizeOriginal ? input : detected.input;

      cv::imshow(name, detected.visualize(output));
      if (key == ' ')
      {
         auto const file = Utility::uniqueFilename("out", "jpg");
         std::cout << "Saving file: " << file << std::endl;
         cv::imwrite(file, output);
      }
   }
   cv::destroyAllWindows();
   return 0;
}
