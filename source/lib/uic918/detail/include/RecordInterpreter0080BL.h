#pragma once

#include "AbstractRecord.h"
#include "RecordHeader.h"

namespace uic918::detail
{
  class RecordInterpreter0080BL : public AbstractRecord
  {
  public:
    RecordInterpreter0080BL(RecordHeader &&header);

    virtual Context &interpret(Context &context) override;
  };
}