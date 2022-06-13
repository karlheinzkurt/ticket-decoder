#pragma once

#include "../include/Field.h"

#include <string>
#include <vector>
#include <optional>

struct Context
{
  using BytesType = std::vector<std::uint8_t>;

  virtual ~Context() = default;

  virtual BytesType::const_iterator &getPosition() = 0;

  virtual bool isEmpty() = 0;

  virtual std::size_t getRemainingSize() = 0;

  virtual std::optional<Field> getField(std::string key) = 0;

  virtual Context &setField(std::string key, Field &&field) = 0;

  virtual Context &addField(std::string key, std::string value) = 0;

  virtual Context &addField(std::string key, std::string value, std::string description) = 0;

  virtual Context &addField(std::string key, std::string value, std::optional<std::string> description) = 0;
};
