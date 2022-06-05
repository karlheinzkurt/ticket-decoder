
#include "../include/RecordInterpreterU_TLAY.h"
#include "../include/Utility.h"
#include "../include/RCT2Field.h"

#include <stdexcept>

RecordInterpreterU_TLAY::RecordInterpreterU_TLAY(RecordHeader &&h) : header(std::move(h)) {}

Interpreter::Context &RecordInterpreterU_TLAY::interpret(Context &context)
{
  if (header.recordId.compare("U_TLAY") != 0 || header.recordVersion.compare("01") != 0)
  {
    throw std::runtime_error(std::string("Unsupported header: ") + header.to_string());
  }

  context.output.insert(std::make_pair("U_TLAY.recordId", header.recordId));
  context.output.insert(std::make_pair("U_TLAY.recordVersion", header.recordVersion));
  context.output.insert(std::make_pair("U_TLAY.recordLength", std::to_string(header.recordLength)));

  auto const layoutStandard = Utility::getAlphanumeric(context.position, 4);
  if (layoutStandard.compare("RCT2") != 0)
  {
    throw std::runtime_error(std::string("Unsupported layour: ") + layoutStandard);
  }

  context.output.insert(std::make_pair("U_TLAY.layoutStandard", layoutStandard));
  auto const numberOfFields = std::stoi(Utility::getAlphanumeric(context.position, 4));
  context.output.insert(std::make_pair("U_TLAY.numberOfFields", std::to_string(numberOfFields)));

  for (auto fieldIndex = 0; fieldIndex < numberOfFields && context.position != context.uncompressedMessage.end(); ++fieldIndex)
  {
    auto const [name, content] = RCT2Field{context.position}.to_output(fieldIndex);
    context.output.insert(std::make_pair(std::string("U_TLAY.") + name, content));
  }

  return context;
}