
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "lib/dip/filtering/include/Pipe.h"

namespace dip::filtering::pipe
{

   TEST(Pipe, filter)
   {
      auto const descriptor = filter(Descriptor::fromImage(cv::Mat(10, 10, CV_8UC1)),
                                     {[&](Descriptor &&descriptor)
                                      {
                                         EXPECT_EQ(descriptor.stepCount, 1);
                                         descriptor.image.at<std::uint8_t>(5, 5) = 23;
                                         return std::move(descriptor);
                                      },
                                      [&](Descriptor &&descriptor)
                                      {
                                         EXPECT_EQ(descriptor.stepCount, 2);
                                         descriptor.image.at<std::uint8_t>(6, 6) = 42;
                                         return std::move(descriptor);
                                      }});
      EXPECT_EQ(descriptor.stepCount, 3);
      EXPECT_EQ(descriptor.image.at<std::uint8_t>(5, 5), 23);
      EXPECT_EQ(descriptor.image.at<std::uint8_t>(6, 6), 42);
   }
}
