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

#include "bedrock/actor/actor.h"
#include "endstone/actor/actor.h"
#include "endstone/detail/permissions/permissible_base.h"
#include "endstone/detail/server.h"

using BedrockActor = ::Actor;

namespace endstone::detail {

class EndstoneActor : public Actor {
public:
    EndstoneActor(EndstoneServer &server, BedrockActor &actor) : server_(server), actor_(actor) {}
    ~EndstoneActor() override = default;

    // CommandSender
    void sendMessage(const std::string &message) const override;
    void sendErrorMessage(const std::string &message) const override;
    [[nodiscard]] Server &getServer() const override;
    [[nodiscard]] std::string getName() const override;

    // Permissible
    [[nodiscard]] bool isPermissionSet(std::string name) const override;
    [[nodiscard]] bool isPermissionSet(const Permission &perm) const override;
    [[nodiscard]] bool hasPermission(std::string name) const override;
    [[nodiscard]] bool hasPermission(const Permission &perm) const override;
    PermissionAttachment *addAttachment(Plugin &plugin, const std::string &name, bool value) override;
    PermissionAttachment *addAttachment(Plugin &plugin) override;
    bool removeAttachment(PermissionAttachment &attachment) override;
    void recalculatePermissions() override;
    [[nodiscard]] std::unordered_set<PermissionAttachmentInfo *> getEffectivePermissions() const override;
    [[nodiscard]] bool isOp() const override;
    void setOp(bool value) override;

private:
    EndstoneServer &server_;
    BedrockActor &actor_;
    static PermissibleBase mPerm;
};

}  // namespace endstone::detail