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

#include "bedrock/event/event_coordinator.h"

#include <iomanip>
#include <sstream>

#include <entt/entt.hpp>
#include <pybind11/pybind11.h>
#include <spdlog/spdlog.h>

#include "bedrock/event/coordinator_result.h"
#include "bedrock/level/level.h"
#include "bedrock/server/server_instance.h"
#include "endstone/detail/hook.h"
#include "endstone/detail/level/level.h"
#include "endstone/detail/plugin/python_plugin_loader.h"
#include "endstone/detail/server.h"
#include "endstone/event/server/server_load_event.h"
#include "endstone/level/level.h"
#include "endstone/plugin/plugin_load_order.h"
#include "endstone/util/color_format.h"

namespace py = pybind11;

using endstone::ColorFormat;
using endstone::PluginLoadOrder;
using endstone::ServerLoadEvent;
using endstone::detail::EndstoneLevel;
using endstone::detail::EndstoneServer;
using endstone::detail::PythonPluginLoader;

void ServerInstanceEventCoordinator::sendServerInitializeStart(ServerInstance &instance)
{
    auto &server = entt::locator<EndstoneServer>::value_or(instance);
    server.getPluginManager().registerLoader(std::make_unique<PythonPluginLoader>(server));
    server.getLogger().info(ColorFormat::DARK_AQUA + ColorFormat::BOLD +
                                "This server is running {} version: {} (Minecraft: {})",
                            server.getName(), server.getVersion(), server.getMinecraftVersion());

    server.loadPlugins();
    server.enablePlugins(PluginLoadOrder::Startup);
    ENDSTONE_HOOK_CALL_ORIGINAL(&ServerInstanceEventCoordinator::sendServerInitializeStart, this, instance);
}

void ServerInstanceEventCoordinator::sendServerThreadStarted(ServerInstance &instance)
{
    auto &server = entt::locator<EndstoneServer>::value();
    server.enablePlugins(PluginLoadOrder::PostWorld);
    ServerLoadEvent event{ServerLoadEvent::LoadType::Startup};
    server.getPluginManager().callEvent(event);
    ENDSTONE_HOOK_CALL_ORIGINAL(&ServerInstanceEventCoordinator::sendServerThreadStarted, this, instance);
    for (auto *level : server.getLevels()) {
        static_cast<EndstoneLevel *>(level)->initGameplayHandlerAdapter();
    }
}

void ServerInstanceEventCoordinator::sendServerThreadStopped(ServerInstance &instance)
{
    py::gil_scoped_acquire acquire{};
    entt::locator<EndstoneServer>::value().disablePlugins();
    entt::locator<EndstoneServer>::reset();  // we need to explicitly acquire GIL and destroy the server instance as the
                                             // command map and the plugin manager hold shared_ptrs to python objects
    ENDSTONE_HOOK_CALL_ORIGINAL(&ServerInstanceEventCoordinator::sendServerThreadStopped, this, instance);
}

void ServerInstanceEventCoordinator::sendServerLevelInitialized(ServerInstance &instance, Level &level)
{
    auto &server = entt::locator<EndstoneServer>::value();
    server.addLevel(std::make_unique<EndstoneLevel>(level));
    ENDSTONE_HOOK_CALL_ORIGINAL(&ServerInstanceEventCoordinator::sendServerLevelInitialized, this, instance, level);
}
