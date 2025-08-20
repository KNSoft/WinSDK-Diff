// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_Mcp_2_H
#define WINRT_Windows_AI_Agents_Mcp_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.AI.Agents.Mcp.1.h"
WINRT_EXPORT namespace winrt::Windows::AI::Agents::Mcp
{
    struct WINRT_IMPL_EMPTY_BASES McpHttpConnectionResult : winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult
    {
        McpHttpConnectionResult(std::nullptr_t) noexcept {}
        McpHttpConnectionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES McpNamedPipeConnectionResult : winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult
    {
        McpNamedPipeConnectionResult(std::nullptr_t) noexcept {}
        McpNamedPipeConnectionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES McpServerRegistry : winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry
    {
        McpServerRegistry(std::nullptr_t) noexcept {}
        McpServerRegistry(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct WINRT_IMPL_EMPTY_BASES McpStdioConnectionInfo : winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo,
        impl::require<McpStdioConnectionInfo, winrt::Windows::Foundation::IClosable>
    {
        McpStdioConnectionInfo(std::nullptr_t) noexcept {}
        McpStdioConnectionInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
