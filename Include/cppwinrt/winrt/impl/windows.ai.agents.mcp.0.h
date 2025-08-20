// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_Mcp_0_H
#define WINRT_Windows_AI_Agents_Mcp_0_H
WINRT_EXPORT namespace winrt::Windows::AI::Agents
{
    struct AgentContext;
    struct AgentInfo;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    struct ValueSet;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct WindowId;
}
WINRT_EXPORT namespace winrt::Windows::AI::Agents::Mcp
{
    struct IMcpHttpConnectionResult;
    struct IMcpNamedPipeConnectionResult;
    struct IMcpNamedPipeConnectionServer;
    struct IMcpServerRegistry;
    struct IMcpServerRegistryStatics;
    struct IMcpSseConnectionServer;
    struct IMcpStdioConnectionInfo;
    struct McpHttpConnectionResult;
    struct McpNamedPipeConnectionResult;
    struct McpServerRegistry;
    struct McpStdioConnectionInfo;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::McpServerRegistry>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::Agents::Mcp::McpStdioConnectionInfo>{ using type = class_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult> = L"Windows.AI.Agents.Mcp.McpHttpConnectionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult> = L"Windows.AI.Agents.Mcp.McpNamedPipeConnectionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::McpServerRegistry> = L"Windows.AI.Agents.Mcp.McpServerRegistry";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::McpStdioConnectionInfo> = L"Windows.AI.Agents.Mcp.McpStdioConnectionInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult> = L"Windows.AI.Agents.Mcp.IMcpHttpConnectionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult> = L"Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionResult";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer> = L"Windows.AI.Agents.Mcp.IMcpNamedPipeConnectionServer";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry> = L"Windows.AI.Agents.Mcp.IMcpServerRegistry";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics> = L"Windows.AI.Agents.Mcp.IMcpServerRegistryStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer> = L"Windows.AI.Agents.Mcp.IMcpSseConnectionServer";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo> = L"Windows.AI.Agents.Mcp.IMcpStdioConnectionInfo";
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>{ 0xD2C3755F,0x6D3C,0x5E90,{ 0x84,0xDD,0x3E,0x09,0x73,0x04,0x96,0x06 } }; // D2C3755F-6D3C-5E90-84DD-3E0973049606
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult>{ 0x8A2AEF6F,0xB4DC,0x5180,{ 0xA3,0xE1,0x47,0xB6,0x3D,0xBB,0xB7,0x0A } }; // 8A2AEF6F-B4DC-5180-A3E1-47B63DBBB70A
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>{ 0x52F204A5,0x2AD1,0x5430,{ 0x96,0xC9,0xEA,0x7E,0x09,0x0B,0xE8,0x39 } }; // 52F204A5-2AD1-5430-96C9-EA7E090BE839
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>{ 0x150F795B,0x3F93,0x4493,{ 0xAB,0xC7,0x48,0xA0,0x4F,0xD2,0xD7,0xB6 } }; // 150F795B-3F93-4493-ABC7-48A04FD2D7B6
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>{ 0x4ACF7FED,0xD300,0x55BC,{ 0x9D,0xDE,0x9F,0x43,0x3C,0xDC,0x90,0x3D } }; // 4ACF7FED-D300-55BC-9DDE-9F433CDC903D
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>{ 0x6C558671,0x1B20,0x5B6B,{ 0x92,0x0D,0xB8,0xAF,0xC2,0x50,0x97,0x71 } }; // 6C558671-1B20-5B6B-920D-B8AFC2509771
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>{ 0x93D9827B,0x32A2,0x5B89,{ 0xBA,0x8A,0x05,0xBD,0x20,0x93,0x59,0x8E } }; // 93D9827B-32A2-5B89-BA8A-05BD2093598E
    template <> struct default_interface<winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult>{ using type = winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult; };
    template <> struct default_interface<winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult>{ using type = winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult; };
    template <> struct default_interface<winrt::Windows::AI::Agents::Mcp::McpServerRegistry>{ using type = winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry; };
    template <> struct default_interface<winrt::Windows::AI::Agents::Mcp::McpStdioConnectionInfo>{ using type = winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo; };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Uri(void**) noexcept = 0;
            virtual int32_t __stdcall put_Uri(void*) noexcept = 0;
            virtual int32_t __stdcall get_Headers(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Connect(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetAgentInfos(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall GetMcpConnectionInfo(winrt::guid, struct struct_Windows_UI_WindowId, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall Connect(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Command(void**) noexcept = 0;
            virtual int32_t __stdcall GetCommandArguments(uint32_t* __resultSize, void***) noexcept = 0;
            virtual int32_t __stdcall get_Info(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult
    {
        [[nodiscard]] auto Uri() const;
        auto Uri(winrt::Windows::Foundation::Uri const& value) const;
        [[nodiscard]] auto Headers() const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionResult
    {
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionResult<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionServer
    {
        auto Connect(winrt::Windows::AI::Agents::AgentContext const& hostContext, param::hstring const& pipeName, winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult const& connectionResult) const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionServer<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpServerRegistry
    {
        auto GetAgentInfos() const;
        auto GetMcpConnectionInfo(winrt::guid const& agentId, winrt::Windows::UI::WindowId const& ownerWindowId) const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpServerRegistry<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpServerRegistryStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpServerRegistryStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpSseConnectionServer
    {
        auto Connect(winrt::Windows::AI::Agents::AgentContext const& hostContext, winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult const& connectionResult) const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpSseConnectionServer<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo
    {
        [[nodiscard]] auto Command() const;
        auto GetCommandArguments() const;
        [[nodiscard]] auto Info() const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>
    {
        template <typename D> using type = consume_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo<D>;
    };
}
#endif
