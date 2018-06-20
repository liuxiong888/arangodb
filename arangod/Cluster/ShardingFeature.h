////////////////////////////////////////////////////////////////////////////////
/// DISCLAIMER
///
/// Copyright 2014-2016 ArangoDB GmbH, Cologne, Germany
/// Copyright 2004-2014 triAGENS GmbH, Cologne, Germany
///
/// Licensed under the Apache License, Version 2.0 (the "License");
/// you may not use this file except in compliance with the License.
/// You may obtain a copy of the License at
///
///     http://www.apache.org/licenses/LICENSE-2.0
///
/// Unless required by applicable law or agreed to in writing, software
/// distributed under the License is distributed on an "AS IS" BASIS,
/// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
/// See the License for the specific language governing permissions and
/// limitations under the License.
///
/// Copyright holder is ArangoDB GmbH, Cologne, Germany
///
/// @author Jan Steemann
////////////////////////////////////////////////////////////////////////////////

#ifndef ARANGOD_CLUSTER_SHARDING_FEATURE_H
#define ARANGOD_CLUSTER_SHARDING_FEATURE_H 1

#include "Basics/Common.h"
#include "ApplicationFeatures/ApplicationFeature.h"
#include "Cluster/ShardingStrategy.h"

namespace arangodb {
class ShardingFeature : public application_features::ApplicationFeature {
 public:
  explicit ShardingFeature(application_features::ApplicationServer*);

 public:
  void prepare() override final;

  void registerFactory(std::string const& name, 
                       ShardingStrategy::FactoryFunction const&);

  std::unique_ptr<ShardingStrategy> create(std::string const& name, LogicalCollection* collection);

 private:
  std::unordered_map<std::string, ShardingStrategy::FactoryFunction> _factories;
};
}

#endif
