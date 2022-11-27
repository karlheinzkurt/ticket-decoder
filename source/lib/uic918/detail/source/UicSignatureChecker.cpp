
#include "../include/UicSignatureChecker.h"

#include "lib/utility/include/Logging.h"

#include <botan/pubkey.h>
#include <botan/ber_dec.h>
#include <botan/base64.h>
#include <botan/x509_ca.h>
#include <botan/x509_key.h>
#include <botan/dsa.h>

#include <pugixml.hpp>

#include <vector>
#include <map>
#include <iomanip>
#include <sstream>
#include <regex>
#include <numeric>

namespace uic918::detail
{
  UicSignatureChecker::UicSignatureChecker(::utility::LoggerFactory &loggerFactory, std::filesystem::path const &uicSignatureXml)
      : logger(CREATE_LOGGER(loggerFactory))
  {
    if (!std::filesystem::exists(uicSignatureXml) || !std::filesystem::is_regular_file(uicSignatureXml))
    {
      LOG_WARN(logger) << "UIC signature file not found or not a regular file: " << uicSignatureXml;
      return;
    }

    auto doc = pugi::xml_document{};
    auto const result = doc.load_file(uicSignatureXml.c_str());
    if (!result)
    {
      LOG_WARN(logger) << "Loading UIC signature file failed with: " << result.description();
      return;
    }

    for (auto const xml : doc.child("keys").children("key"))
    {
      auto key = UicCertificate{
          UicCertificate::getNormalizedCode(xml.child_value("issuerCode")),
          UicCertificate::getNormalizedId(xml.child_value("id")),
          xml.child_value("issuerName"),
          xml.child_value("signatureAlgorithm"),
          xml.child_value("publicKey"),
          {}};

      try
      {
        auto const mapKey = key.getMapKey();
        keys.emplace(std::make_pair(mapKey, std::move(key)));

        LOG_DEBUG(logger) << "Successfully loaded: " << key.toString();
      }
      catch (std::exception const &e)
      {
        LOG_WARN(logger) << "Loading failed: " << key.toString() << " with: " << e.what();
      }
    }

    LOG_INFO(logger) << "Number of valid public keys: " << keys.size();
  }

  api::SignatureChecker::Result UicSignatureChecker::UicSignatureChecker::check(
      std::string const &ricsCode, std::string const &keyId,
      std::vector<std::uint8_t> const &message,
      std::vector<std::uint8_t> const &signature) const
  {
    auto const entryId = UicCertificate::createMapKey(ricsCode, keyId);
    auto const entry = keys.find(entryId);
    if (entry == keys.end())
    {
      return api::SignatureChecker::Result::KeyNotFound;
    }
    auto const verified = entry->second.verify(message, signature);
    return verified ? api::SignatureChecker::Result::Successful : api::SignatureChecker::Result::Failed;
  }
}
