// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_1_H
#define WINRT_Windows_AI_Agents_1_H
#include "winrt/impl/Windows.AI.Agents.0.h"
WINRT_EXPORT namespace winrt::Windows::AI::Agents
{
    struct WINRT_IMPL_EMPTY_BASES IAgentContext :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAgentContext>
    {
        IAgentContext(std::nullptr_t = nullptr) noexcept {}
        IAgentContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAgentContextStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAgentContextStatics>
    {
        IAgentContextStatics(std::nullptr_t = nullptr) noexcept {}
        IAgentContextStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAgentInfo :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAgentInfo>
    {
        IAgentInfo(std::nullptr_t = nullptr) noexcept {}
        IAgentInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAgentResourcesStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAgentResourcesStatics>
    {
        IAgentResourcesStatics(std::nullptr_t = nullptr) noexcept {}
        IAgentResourcesStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
