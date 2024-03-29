#pragma once

#include "../../api/include/Decoder.h"

#include "lib/utility/include/LoggingFwd.h"

#include <opencv2/core/mat.hpp>

#include <memory>
#include <vector>
#include <tuple>

namespace barcode::detail
{
  class AztecDecoder : public api::Decoder
  {
  private:
    ::utility::Logger logger;
    struct Internal;

    std::shared_ptr<Internal> internal; // shared to make forward decl type possible

  public:
    AztecDecoder(::utility::LoggerFactory &loggerFactory, unsigned int id, cv::Rect const &box, cv::Mat const &image, api::Config config);

    virtual api::Level detect() override;

    virtual api::Result decode() override;
  };
}
