// Copyright (c) Microsoft Corporation. All rights reserved.
// SPDX-License-Identifier: MIT

#pragma once

#include "common/storage_url_builder.hpp"

#include <map>
#include <string>

namespace Azure { namespace Storage { namespace DataLake {

  namespace Details {
    UrlBuilder GetBlobUriFromDfsUri(const UrlBuilder& dfsUri);
  } // namespace Details

  std::map<std::string, std::string> DeserializeMetadata(
      const std::string& dataLakePropertiesString);

  std::string SerializeMetadata(const std::map<std::string, std::string>& dataLakePropertiesMap);

}}} // namespace Azure::Storage::DataLake
