
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "lib/utility/include/Logging.h"

#include "lib/dip/detection/api/include/Detector.h"

#include "test/support/include/Loader.h"

#include <filesystem>

namespace dip::detection::api
{
    static auto loggerFactory = ::utility::LoggerFactory::createLazy(true);

    TEST(Detector, createAll)
    {
        auto const detectors = Detector::createAll(loggerFactory, {support::Loader::getExecutableFolderPath()});
        EXPECT_EQ(detectors.size(), 3);
    }
}
