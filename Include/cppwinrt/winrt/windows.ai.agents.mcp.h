// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_Mcp_H
#define WINRT_Windows_AI_Agents_Mcp_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/Windows.AI.Agents.h"
#include "winrt/impl/Windows.AI.Agents.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.UI.2.h"
#include "winrt/impl/Windows.AI.Agents.Mcp.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult<D>::Uri() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Uri(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>**)this;
            check_hresult(_winrt_abi_type->get_Uri(&value));
        }
        return winrt::Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult<D>::Uri(winrt::Windows::Foundation::Uri const& value) const
    {
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->put_Uri(*(void**)(&value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>**)this;
            check_hresult(_winrt_abi_type->put_Uri(*(void**)(&value)));
        }
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpHttpConnectionResult<D>::Headers() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Headers(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>**)this;
            check_hresult(_winrt_abi_type->get_Headers(&value));
        }
        return winrt::Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpNamedPipeConnectionServer<D>::Connect(winrt::Windows::AI::Agents::AgentContext const& hostContext, param::hstring const& pipeName, winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult const& connectionResult) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Connect(*(void**)(&hostContext), *(void**)(&pipeName), *(void**)(&connectionResult), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>**)this;
            check_hresult(_winrt_abi_type->Connect(*(void**)(&hostContext), *(void**)(&pipeName), *(void**)(&connectionResult), &result));
        }
        return winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpServerRegistry<D>::GetAgentInfos() const
    {
        uint32_t result_impl_size{};
        void** result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetAgentInfos(&result_impl_size, &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>**)this;
            check_hresult(_winrt_abi_type->GetAgentInfos(&result_impl_size, &result));
        }
        return com_array<winrt::Windows::AI::Agents::AgentInfo>{ result, result_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpServerRegistry<D>::GetMcpConnectionInfo(winrt::guid const& agentId, winrt::Windows::UI::WindowId const& ownerWindowId) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetMcpConnectionInfo(impl::bind_in(agentId), impl::bind_in(ownerWindowId), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>**)this;
            check_hresult(_winrt_abi_type->GetMcpConnectionInfo(impl::bind_in(agentId), impl::bind_in(ownerWindowId), &result));
        }
        return winrt::Windows::AI::Agents::Mcp::McpStdioConnectionInfo{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpServerRegistryStatics<D>::GetDefault() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetDefault(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>**)this;
            check_hresult(_winrt_abi_type->GetDefault(&result));
        }
        return winrt::Windows::AI::Agents::Mcp::McpServerRegistry{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpSseConnectionServer<D>::Connect(winrt::Windows::AI::Agents::AgentContext const& hostContext, winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult const& connectionResult) const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->Connect(*(void**)(&hostContext), *(void**)(&connectionResult), &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>**)this;
            check_hresult(_winrt_abi_type->Connect(*(void**)(&hostContext), *(void**)(&connectionResult), &result));
        }
        return winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo<D>::Command() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Command(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>**)this;
            check_hresult(_winrt_abi_type->get_Command(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo<D>::GetCommandArguments() const
    {
        uint32_t result_impl_size{};
        void** result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetCommandArguments(&result_impl_size, &result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>**)this;
            check_hresult(_winrt_abi_type->GetCommandArguments(&result_impl_size, &result));
        }
        return com_array<hstring>{ result, result_impl_size, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_Mcp_IMcpStdioConnectionInfo<D>::Info() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Info(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>**)this;
            check_hresult(_winrt_abi_type->get_Info(&value));
        }
        return winrt::Windows::AI::Agents::AgentInfo{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult>
    {
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Uri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Uri(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Headers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::ValueSet>(this->shim().Headers());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult>
    {
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer>
    {
        int32_t __stdcall Connect(void* hostContext, void* pipeName, void* connectionResult, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult>(this->shim().Connect(*reinterpret_cast<winrt::Windows::AI::Agents::AgentContext const*>(&hostContext), *reinterpret_cast<hstring const*>(&pipeName), *reinterpret_cast<winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult const*>(&connectionResult)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry>
    {
        int32_t __stdcall GetAgentInfos(uint32_t* __resultSize, void*** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            std::tie(*__resultSize, *result) = detach_abi(this->shim().GetAgentInfos());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetMcpConnectionInfo(winrt::guid agentId, struct struct_Windows_UI_WindowId ownerWindowId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::AI::Agents::Mcp::McpStdioConnectionInfo>(this->shim().GetMcpConnectionInfo(*reinterpret_cast<winrt::guid const*>(&agentId), *reinterpret_cast<winrt::Windows::UI::WindowId const*>(&ownerWindowId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::AI::Agents::Mcp::McpServerRegistry>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer>
    {
        int32_t __stdcall Connect(void* hostContext, void* connectionResult, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult>(this->shim().Connect(*reinterpret_cast<winrt::Windows::AI::Agents::AgentContext const*>(&hostContext), *reinterpret_cast<winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult const*>(&connectionResult)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo> : produce_base<D, winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo>
    {
        int32_t __stdcall get_Command(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Command());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCommandArguments(uint32_t* __resultSize, void*** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            std::tie(*__resultSize, *result) = detach_abi(this->shim().GetCommandArguments());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Info(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::AI::Agents::AgentInfo>(this->shim().Info());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::AI::Agents::Mcp
{
    inline auto McpServerRegistry::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::AI::Agents::Mcp::McpServerRegistry(*)(IMcpServerRegistryStatics const&), McpServerRegistry, IMcpServerRegistryStatics>([](IMcpServerRegistryStatics const& f) { return f.GetDefault(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpHttpConnectionResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpNamedPipeConnectionServer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpServerRegistryStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpSseConnectionServer> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::IMcpStdioConnectionInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::McpHttpConnectionResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::McpNamedPipeConnectionResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::McpServerRegistry> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::Mcp::McpStdioConnectionInfo> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
