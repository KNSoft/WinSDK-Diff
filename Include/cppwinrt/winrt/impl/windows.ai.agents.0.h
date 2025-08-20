// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_0_H
#define WINRT_Windows_AI_Agents_0_H
WINRT_EXPORT namespace winrt::Windows::ApplicationModel
{
    struct Package;
}
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct Uri;
}
WINRT_EXPORT namespace winrt::Windows::AI::Agents
{
    enum class AgentAuthorizationResponse : int32_t
    {
        Denied = 0,
        Approved = 1,
    };
    struct IAgentContext;
    struct IAgentContextStatics;
    struct IAgentInfo;
    struct IAgentResourcesStatics;
    struct AgentContext;
    struct AgentInfo;
    struct AgentResources;
    struct AgentsContract;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::AI::Agents::IAgentContext>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::IAgentContextStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::IAgentInfo>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::IAgentResourcesStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::AI::Agents::AgentContext>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::Agents::AgentInfo>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::Agents::AgentResources>{ using type = class_category; };
    template <> struct category<winrt::Windows::AI::Agents::AgentAuthorizationResponse>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::AgentContext> = L"Windows.AI.Agents.AgentContext";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::AgentInfo> = L"Windows.AI.Agents.AgentInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::AgentResources> = L"Windows.AI.Agents.AgentResources";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::AgentAuthorizationResponse> = L"Windows.AI.Agents.AgentAuthorizationResponse";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::IAgentContext> = L"Windows.AI.Agents.IAgentContext";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::IAgentContextStatics> = L"Windows.AI.Agents.IAgentContextStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::IAgentInfo> = L"Windows.AI.Agents.IAgentInfo";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::IAgentResourcesStatics> = L"Windows.AI.Agents.IAgentResourcesStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::AI::Agents::AgentsContract> = L"Windows.AI.Agents.AgentsContract";
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::IAgentContext>{ 0x67812FD9,0xF5FC,0x5431,{ 0xB2,0x82,0x2F,0xC7,0x53,0xB0,0xC2,0xCD } }; // 67812FD9-F5FC-5431-B282-2FC753B0C2CD
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::IAgentContextStatics>{ 0x0625ABF6,0x79F6,0x5116,{ 0xA1,0x4A,0x91,0xB3,0x96,0x7F,0xC2,0x14 } }; // 0625ABF6-79F6-5116-A14A-91B3967FC214
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::IAgentInfo>{ 0xB023D498,0x59AB,0x410B,{ 0x83,0xE7,0x1E,0xD0,0x07,0xEE,0x2F,0x68 } }; // B023D498-59AB-410B-83E7-1ED007EE2F68
    template <> inline constexpr guid guid_v<winrt::Windows::AI::Agents::IAgentResourcesStatics>{ 0xADEDAAF8,0x3487,0x50B4,{ 0xAC,0x42,0x49,0x00,0x83,0x64,0x2B,0x05 } }; // ADEDAAF8-3487-50B4-AC42-490083642B05
    template <> struct default_interface<winrt::Windows::AI::Agents::AgentContext>{ using type = winrt::Windows::AI::Agents::IAgentContext; };
    template <> struct default_interface<winrt::Windows::AI::Agents::AgentInfo>{ using type = winrt::Windows::AI::Agents::IAgentInfo; };
    template <> struct abi<winrt::Windows::AI::Agents::IAgentContext>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_AppUserModelId(void**) noexcept = 0;
            virtual int32_t __stdcall RequestResourceAccess(void*, void*, void*, int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::IAgentContextStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetContextForCaller(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::IAgentInfo>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Id(winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall get_Name(void**) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
            virtual int32_t __stdcall GetPackage(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::AI::Agents::IAgentResourcesStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_FileSystemRead(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileSystemWrite(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileSystemDelete(void**) noexcept = 0;
            virtual int32_t __stdcall get_FileSystemCreate(void**) noexcept = 0;
            virtual int32_t __stdcall get_HttpGet(void**) noexcept = 0;
            virtual int32_t __stdcall get_HttpPost(void**) noexcept = 0;
            virtual int32_t __stdcall get_HttpPut(void**) noexcept = 0;
            virtual int32_t __stdcall get_HttpDelete(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_AI_Agents_IAgentContext
    {
        [[nodiscard]] auto AppUserModelId() const;
        auto RequestResourceAccess(winrt::Windows::Foundation::Uri const& resource, param::hstring const& description, param::hstring const& reasonForAsking) const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::IAgentContext>
    {
        template <typename D> using type = consume_Windows_AI_Agents_IAgentContext<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_IAgentContextStatics
    {
        auto GetContextForCaller() const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::IAgentContextStatics>
    {
        template <typename D> using type = consume_Windows_AI_Agents_IAgentContextStatics<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_IAgentInfo
    {
        [[nodiscard]] auto Id() const;
        [[nodiscard]] auto Name() const;
        [[nodiscard]] auto Description() const;
        auto GetPackage() const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::IAgentInfo>
    {
        template <typename D> using type = consume_Windows_AI_Agents_IAgentInfo<D>;
    };
    template <typename D>
    struct consume_Windows_AI_Agents_IAgentResourcesStatics
    {
        [[nodiscard]] auto FileSystemRead() const;
        [[nodiscard]] auto FileSystemWrite() const;
        [[nodiscard]] auto FileSystemDelete() const;
        [[nodiscard]] auto FileSystemCreate() const;
        [[nodiscard]] auto HttpGet() const;
        [[nodiscard]] auto HttpPost() const;
        [[nodiscard]] auto HttpPut() const;
        [[nodiscard]] auto HttpDelete() const;
    };
    template <> struct consume<winrt::Windows::AI::Agents::IAgentResourcesStatics>
    {
        template <typename D> using type = consume_Windows_AI_Agents_IAgentResourcesStatics<D>;
    };
}
#endif
