// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_2_H
#define WINRT_Windows_AI_Agents_2_H
#include "winrt/impl/Windows.AI.Agents.1.h"
WINRT_EXPORT namespace winrt::Windows::AI::Agents
{
    struct WINRT_IMPL_EMPTY_BASES AgentContext : winrt::Windows::AI::Agents::IAgentContext
    {
        AgentContext(std::nullptr_t) noexcept {}
        AgentContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::IAgentContext(ptr, take_ownership_from_abi) {}
        static auto GetContextForCaller();
    };
    struct WINRT_IMPL_EMPTY_BASES AgentInfo : winrt::Windows::AI::Agents::IAgentInfo
    {
        AgentInfo(std::nullptr_t) noexcept {}
        AgentInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::IAgentInfo(ptr, take_ownership_from_abi) {}
    };
    struct AgentResources
    {
        AgentResources() = delete;
        [[nodiscard]] static auto FileSystemRead();
        [[nodiscard]] static auto FileSystemWrite();
        [[nodiscard]] static auto FileSystemDelete();
        [[nodiscard]] static auto FileSystemCreate();
        [[nodiscard]] static auto HttpGet();
        [[nodiscard]] static auto HttpPost();
        [[nodiscard]] static auto HttpPut();
        [[nodiscard]] static auto HttpDelete();
    };
}
#endif
