// Copyright (c) 2023, The Endstone Project. (https://endstone.dev) All Rights Reserved.
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

#include <exception>

#include <spdlog/spdlog.h>

#include "endstone_core/endstone_server.h"
#include "endstone_runtime/hook.h"

#ifdef __GNUC__
#define ENDSTONE_RUNTIME_CTOR __attribute__((constructor))
#else
#define ENDSTONE_RUNTIME_CTOR
#endif

ENDSTONE_RUNTIME_CTOR int main()
{
    try {
        auto &server = EndstoneServer::getInstance();
        server.getLogger().info("Initialising...");
        endstone::hook::install();
        return 0;
    }
    catch (const std::exception &e) {
        spdlog::error("An exception occurred while attaching Endstone runtime to the process.");
        spdlog::error("{}", e.what());

        return -1;
    }
}

#ifdef _WIN32
#include <Windows.h>

[[maybe_unused]] BOOL WINAPI DllMain(_In_ HINSTANCE /*module*/,  // handle to DLL module
                                     _In_ DWORD reason,          // reason for calling function
                                     _In_ LPVOID /*reserved*/)   // reserved
{
    switch (reason) {
    case DLL_PROCESS_ATTACH: {
        return main() == 0 ? TRUE : FALSE;
    }
    default:
        break;
    }
    return TRUE;
}
#endif