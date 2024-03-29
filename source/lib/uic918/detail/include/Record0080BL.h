#pragma once

#include "AbstractRecord.h"
#include "RecordHeader.h"

namespace uic918::detail
{
  class Record0080BL : public AbstractRecord
  {
  public:
    Record0080BL(::utility::LoggerFactory &loggerFactory, RecordHeader &&header);

    virtual Context interpret(Context &&context) override;
  };
}
