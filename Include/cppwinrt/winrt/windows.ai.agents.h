// C++/WinRT v2.0.250303.1

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once
#ifndef WINRT_Windows_AI_Agents_H
#define WINRT_Windows_AI_Agents_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.250303.1"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.250303.1"
#include "winrt/impl/Windows.ApplicationModel.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.AI.Agents.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_AI_Agents_IAgentContext<D>::AppUserModelId() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentContext>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentContext, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentContext>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_AppUserModelId(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentContext>**)this;
            check_hresult(_winrt_abi_type->get_AppUserModelId(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentContext<D>::RequestResourceAccess(winrt::Windows::Foundation::Uri const& resource, param::hstring const& description, param::hstring const& reasonForAsking) const
    {
        winrt::Windows::AI::Agents::AgentAuthorizationResponse result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentContext>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentContext, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentContext>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->RequestResourceAccess(*(void**)(&resource), *(void**)(&description), *(void**)(&reasonForAsking), reinterpret_cast<int32_t*>(&result)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentContext>**)this;
            check_hresult(_winrt_abi_type->RequestResourceAccess(*(void**)(&resource), *(void**)(&description), *(void**)(&reasonForAsking), reinterpret_cast<int32_t*>(&result)));
        }
        return result;
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentContextStatics<D>::GetContextForCaller() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentContextStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentContextStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentContextStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetContextForCaller(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentContextStatics>**)this;
            check_hresult(_winrt_abi_type->GetContextForCaller(&result));
        }
        return winrt::Windows::AI::Agents::AgentContext{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentInfo<D>::Id() const
    {
        winrt::guid value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Id(put_abi(value)));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)this;
            check_hresult(_winrt_abi_type->get_Id(put_abi(value)));
        }
        return value;
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentInfo<D>::Name() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)this;
            check_hresult(_winrt_abi_type->get_Name(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentInfo<D>::Description() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)this;
            check_hresult(_winrt_abi_type->get_Description(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentInfo<D>::GetPackage() const
    {
        void* result{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentInfo>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentInfo, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->GetPackage(&result));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentInfo>**)this;
            check_hresult(_winrt_abi_type->GetPackage(&result));
        }
        return winrt::Windows::ApplicationModel::Package{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::FileSystemRead() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FileSystemRead(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FileSystemRead(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::FileSystemWrite() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FileSystemWrite(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FileSystemWrite(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::FileSystemDelete() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FileSystemDelete(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FileSystemDelete(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::FileSystemCreate() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_FileSystemCreate(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_FileSystemCreate(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::HttpGet() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_HttpGet(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_HttpGet(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::HttpPost() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_HttpPost(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_HttpPost(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::HttpPut() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_HttpPut(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_HttpPut(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_AI_Agents_IAgentResourcesStatics<D>::HttpDelete() const
    {
        void* value{};
        if constexpr (!std::is_same_v<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>)
        {
            winrt::hresult _winrt_cast_result_code;
            auto const _winrt_casted_result = impl::try_as_with_reason<winrt::Windows::AI::Agents::IAgentResourcesStatics, D const*>(static_cast<D const*>(this), _winrt_cast_result_code);
            check_hresult(_winrt_cast_result_code);
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)&_winrt_casted_result;
            check_hresult(_winrt_abi_type->get_HttpDelete(&value));
        }
        else
        {
            auto const _winrt_abi_type = *(abi_t<winrt::Windows::AI::Agents::IAgentResourcesStatics>**)this;
            check_hresult(_winrt_abi_type->get_HttpDelete(&value));
        }
        return hstring{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::IAgentContext> : produce_base<D, winrt::Windows::AI::Agents::IAgentContext>
    {
        int32_t __stdcall get_AppUserModelId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().AppUserModelId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestResourceAccess(void* resource, void* description, void* reasonForAsking, int32_t* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::AI::Agents::AgentAuthorizationResponse>(this->shim().RequestResourceAccess(*reinterpret_cast<winrt::Windows::Foundation::Uri const*>(&resource), *reinterpret_cast<hstring const*>(&description), *reinterpret_cast<hstring const*>(&reasonForAsking)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::IAgentContextStatics> : produce_base<D, winrt::Windows::AI::Agents::IAgentContextStatics>
    {
        int32_t __stdcall GetContextForCaller(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::AI::Agents::AgentContext>(this->shim().GetContextForCaller());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::IAgentInfo> : produce_base<D, winrt::Windows::AI::Agents::IAgentInfo>
    {
        int32_t __stdcall get_Id(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Name(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Name());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Description(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Description());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetPackage(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::ApplicationModel::Package>(this->shim().GetPackage());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::AI::Agents::IAgentResourcesStatics> : produce_base<D, winrt::Windows::AI::Agents::IAgentResourcesStatics>
    {
        int32_t __stdcall get_FileSystemRead(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileSystemRead());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileSystemWrite(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileSystemWrite());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileSystemDelete(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileSystemDelete());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FileSystemCreate(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileSystemCreate());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HttpGet(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HttpGet());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HttpPost(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HttpPost());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HttpPut(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HttpPut());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HttpDelete(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().HttpDelete());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::AI::Agents
{
    inline auto AgentContext::GetContextForCaller()
    {
        return impl::call_factory_cast<winrt::Windows::AI::Agents::AgentContext(*)(IAgentContextStatics const&), AgentContext, IAgentContextStatics>([](IAgentContextStatics const& f) { return f.GetContextForCaller(); });
    }
    inline auto AgentResources::FileSystemRead()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.FileSystemRead(); });
    }
    inline auto AgentResources::FileSystemWrite()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.FileSystemWrite(); });
    }
    inline auto AgentResources::FileSystemDelete()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.FileSystemDelete(); });
    }
    inline auto AgentResources::FileSystemCreate()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.FileSystemCreate(); });
    }
    inline auto AgentResources::HttpGet()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.HttpGet(); });
    }
    inline auto AgentResources::HttpPost()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.HttpPost(); });
    }
    inline auto AgentResources::HttpPut()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.HttpPut(); });
    }
    inline auto AgentResources::HttpDelete()
    {
        return impl::call_factory_cast<hstring(*)(IAgentResourcesStatics const&), AgentResources, IAgentResourcesStatics>([](IAgentResourcesStatics const& f) { return f.HttpDelete(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::AI::Agents::IAgentContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::IAgentContextStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::IAgentInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::IAgentResourcesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::AgentContext> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::AgentInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::AI::Agents::AgentResources> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
