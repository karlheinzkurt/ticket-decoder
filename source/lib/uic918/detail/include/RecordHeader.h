#pragma once

#include "Context.h"

#include <string>
#include <vector>

namespace uic918::detail
{
  struct RecordHeader
  {
    std::vector<std::uint8_t>::const_iterator const start;
    std::string const recordId;
    std::string const recordVersion;
    unsigned int const recordLength;

    RecordHeader(Context &context);

    void ensure(std::string expectedRecordId, std::vector<std::string> expectedRecordVersions);

    std::size_t getRemaining(std::vector<std::uint8_t>::const_iterator const position);

    std::string toString();
  };
}
