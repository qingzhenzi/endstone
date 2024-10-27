// Copyright (c) 2024, The Endstone Project. (https://endstone.dev) All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string_view>

#include "bedrock/bedrock.h"
#include "bedrock/world/inventory/network/item_stack_net_id_variant.h"
#include "bedrock/world/item/item_stack_base.h"
#include "endstone/detail/hook.h"

class ItemStack : public ItemStackBase {
public:
    ENDSTONE_FACTORY_DECLARE(ItemStack);
    ENDSTONE_FACTORY_DECLARE(ItemStack, const ItemStack &rhs);
    ENDSTONE_FACTORY_DECLARE(ItemStack, Item const &item, int count = 1, int aux_value = 0,
                             CompoundTag const *user_data = nullptr);
    ENDSTONE_FACTORY_DECLARE(ItemStack, std::string_view type, int count = 1, int aux_value = 0,
                             CompoundTag const *user_data = nullptr);

private:
    ItemStackNetIdVariant network_id_;
};
BEDROCK_STATIC_ASSERT_SIZE(ItemStack, 152, 152);
