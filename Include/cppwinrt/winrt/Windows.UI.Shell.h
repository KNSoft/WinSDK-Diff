// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_H
#define WINRT_Windows_UI_Shell_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.190620.2"), "Mismatched C++/WinRT headers.");
#include "winrt/Windows.UI.h"
#include "winrt/impl/Windows.ApplicationModel.Core.2.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Graphics.Imaging.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.UI.StartScreen.2.h"
#include "winrt/impl/Windows.UI.Shell.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_UI_Shell_IAdaptiveCard<D>::ToJson() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IAdaptiveCard)->ToJson(&result));
        return hstring{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>::CreateAdaptiveCardFromJson(param::hstring const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IAdaptiveCardBuilderStatics)->CreateAdaptiveCardFromJson(*(void**)(&value), &result));
        return Windows::UI::Shell::IAdaptiveCard{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ISecurityAppManager<D>::Register(Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const
    {
        winrt::guid result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ISecurityAppManager)->Register(static_cast<int32_t>(kind), *(void**)(&displayName), *(void**)(&detailsUri), registerPerUser, put_abi(result)));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Shell_ISecurityAppManager<D>::Unregister(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ISecurityAppManager)->Unregister(static_cast<int32_t>(kind), impl::bind_in(guidRegistration)));
    }
    template <typename D> auto consume_Windows_UI_Shell_ISecurityAppManager<D>::UpdateState(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, Windows::UI::Shell::SecurityAppState const& state, Windows::UI::Shell::SecurityAppSubstatus const& substatus, Windows::Foundation::Uri const& detailsUri) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ISecurityAppManager)->UpdateState(static_cast<int32_t>(kind), impl::bind_in(guidRegistration), static_cast<int32_t>(state), static_cast<int32_t>(substatus), *(void**)(&detailsUri)));
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsSupported() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->get_IsSupported(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsPinningAllowed() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->get_IsPinningAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsCurrentAppPinnedAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->IsCurrentAppPinnedAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::IsAppListEntryPinnedAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->IsAppListEntryPinnedAsync(*(void**)(&appListEntry), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinCurrentAppAsync() const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->RequestPinCurrentAppAsync(&operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager<D>::RequestPinAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager)->RequestPinAppListEntryAsync(*(void**)(&appListEntry), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager2<D>::IsSecondaryTilePinnedAsync(param::hstring const& tileId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager2)->IsSecondaryTilePinnedAsync(*(void**)(&tileId), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager2<D>::RequestPinSecondaryTileAsync(Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager2)->RequestPinSecondaryTileAsync(*(void**)(&secondaryTile), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManager2<D>::TryUnpinSecondaryTileAsync(param::hstring const& tileId) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManager2)->TryUnpinSecondaryTileAsync(*(void**)(&tileId), &operation));
        return Windows::Foundation::IAsyncOperation<bool>{ operation, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_ITaskbarManagerStatics<D>::GetDefault() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::ITaskbarManagerStatics)->GetDefault(&result));
        return Windows::UI::Shell::TaskbarManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Tag() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->get_Tag(&value));
        return Windows::Foundation::IInspectable{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Tag(Windows::Foundation::IInspectable const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->put_Tag(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->put_Title(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Icon() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->get_Icon(&value));
        return Windows::UI::Shell::WindowTabIcon{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Icon(Windows::UI::Shell::WindowTabIcon const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->put_Icon(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::TreatAsSecondaryTileId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->get_TreatAsSecondaryTileId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::TreatAsSecondaryTileId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->put_TreatAsSecondaryTileId(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Group() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->get_Group(&value));
        return Windows::UI::Shell::WindowTabGroup{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::Group(Windows::UI::Shell::WindowTabGroup const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->put_Group(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTab<D>::ReportThumbnailAvailable() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTab)->ReportThumbnailAvailable());
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs<D>::Tab() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabCloseRequestedEventArgs)->get_Tab(&value));
        return Windows::UI::Shell::WindowTab{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabCollection<D>::MoveTab(Windows::UI::Shell::WindowTab const& tab, uint32_t index) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabCollection)->MoveTab(*(void**)(&tab), index));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabGroup<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabGroup)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabGroup<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabGroup)->put_Title(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabGroup<D>::Icon() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabGroup)->get_Icon(&value));
        return Windows::UI::Shell::WindowTabIcon{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabGroup<D>::Icon(Windows::UI::Shell::WindowTabIcon const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabGroup)->put_Icon(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabIconStatics<D>::CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabIconStatics)->CreateFromFontGlyph(*(void**)(&glyph), *(void**)(&fontFamily), &result));
        return Windows::UI::Shell::WindowTabIcon{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabIconStatics<D>::CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabIconStatics)->CreateFromFontGlyphWithUri(*(void**)(&glyph), *(void**)(&fontFamily), *(void**)(&fontUri), &result));
        return Windows::UI::Shell::WindowTabIcon{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabIconStatics<D>::CreateFromImage(Windows::Storage::Streams::IRandomAccessStreamReference const& image) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabIconStatics)->CreateFromImage(*(void**)(&image), &result));
        return Windows::UI::Shell::WindowTabIcon{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::Tabs() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->get_Tabs(&value));
        return Windows::UI::Shell::WindowTabCollection{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::SetActiveTab(Windows::UI::Shell::WindowTab const& tab) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->SetActiveTab(*(void**)(&tab)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabSwitchRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->add_TabSwitchRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IWindowTabManager<D>::TabSwitchRequested_revoker consume_Windows_UI_Shell_IWindowTabManager<D>::TabSwitchRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TabSwitchRequested_revoker>(this, TabSwitchRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabSwitchRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->remove_TabSwitchRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabCloseRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->add_TabCloseRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IWindowTabManager<D>::TabCloseRequested_revoker consume_Windows_UI_Shell_IWindowTabManager<D>::TabCloseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TabCloseRequested_revoker>(this, TabCloseRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabCloseRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->remove_TabCloseRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabTearOutRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->add_TabTearOutRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IWindowTabManager<D>::TabTearOutRequested_revoker consume_Windows_UI_Shell_IWindowTabManager<D>::TabTearOutRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TabTearOutRequested_revoker>(this, TabTearOutRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabTearOutRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->remove_TabTearOutRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabThumbnailRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const
    {
        winrt::event_token token;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->add_TabThumbnailRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_UI_Shell_IWindowTabManager<D>::TabThumbnailRequested_revoker consume_Windows_UI_Shell_IWindowTabManager<D>::TabThumbnailRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, TabThumbnailRequested_revoker>(this, TabThumbnailRequested(handler));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManager<D>::TabThumbnailRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManager)->remove_TabThumbnailRequested(impl::bind_in(token)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManagerStatics<D>::GetForWindow(uint64_t windowId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManagerStatics)->GetForWindow(windowId, &result));
        return Windows::UI::Shell::WindowTabManager{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManagerStatics<D>::IsSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManagerStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabManagerStatics<D>::IsTabTearOutSupported() const
    {
        bool result;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabManagerStatics)->IsTabTearOutSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs<D>::Tab() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs)->get_Tab(&value));
        return Windows::UI::Shell::WindowTab{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs<D>::Tab() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs)->get_Tab(&value));
        return Windows::UI::Shell::WindowTab{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs<D>::WindowId() const
    {
        uint64_t value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs)->get_WindowId(&value));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs<D>::WindowId(uint64_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs)->put_WindowId(value));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>::Tab() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs)->get_Tab(&value));
        return Windows::UI::Shell::WindowTab{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>::RequestedSize() const
    {
        Windows::Graphics::Imaging::BitmapSize value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs)->get_RequestedSize(put_abi(value)));
        return value;
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>::Image() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs)->get_Image(&value));
        return Windows::Storage::Streams::IRandomAccessStreamReference{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>::Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs)->put_Image(*(void**)(&value)));
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>::GetDeferral() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs)->GetDeferral(&result));
        return Windows::Foundation::Deferral{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>::IsCompositedOnWindow() const
    {
        bool value;
        check_hresult(WINRT_IMPL_SHIM(Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs)->get_IsCompositedOnWindow(&value));
        return value;
    }
    template <typename D>
    struct produce<D, Windows::UI::Shell::IAdaptiveCard> : produce_base<D, Windows::UI::Shell::IAdaptiveCard>
    {
        int32_t __stdcall ToJson(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<hstring>(this->shim().ToJson());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IAdaptiveCardBuilderStatics> : produce_base<D, Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        int32_t __stdcall CreateAdaptiveCardFromJson(void* value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::IAdaptiveCard>(this->shim().CreateAdaptiveCardFromJson(*reinterpret_cast<hstring const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ISecurityAppManager> : produce_base<D, Windows::UI::Shell::ISecurityAppManager>
    {
        int32_t __stdcall Register(int32_t kind, void* displayName, void* detailsUri, bool registerPerUser, winrt::guid* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::guid>(this->shim().Register(*reinterpret_cast<Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<hstring const*>(&displayName), *reinterpret_cast<Windows::Foundation::Uri const*>(&detailsUri), registerPerUser));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Unregister(int32_t kind, winrt::guid guidRegistration) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(*reinterpret_cast<Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<winrt::guid const*>(&guidRegistration));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateState(int32_t kind, winrt::guid guidRegistration, int32_t state, int32_t substatus, void* detailsUri) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateState(*reinterpret_cast<Windows::UI::Shell::SecurityAppKind const*>(&kind), *reinterpret_cast<winrt::guid const*>(&guidRegistration), *reinterpret_cast<Windows::UI::Shell::SecurityAppState const*>(&state), *reinterpret_cast<Windows::UI::Shell::SecurityAppSubstatus const*>(&substatus), *reinterpret_cast<Windows::Foundation::Uri const*>(&detailsUri));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManager> : produce_base<D, Windows::UI::Shell::ITaskbarManager>
    {
        int32_t __stdcall get_IsSupported(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsPinningAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsPinningAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsCurrentAppPinnedAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsCurrentAppPinnedAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsAppListEntryPinnedAsync(void* appListEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsAppListEntryPinnedAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinCurrentAppAsync(void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinCurrentAppAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinAppListEntryAsync(void* appListEntry, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinAppListEntryAsync(*reinterpret_cast<Windows::ApplicationModel::Core::AppListEntry const*>(&appListEntry)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManager2> : produce_base<D, Windows::UI::Shell::ITaskbarManager2>
    {
        int32_t __stdcall IsSecondaryTilePinnedAsync(void* tileId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().IsSecondaryTilePinnedAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall RequestPinSecondaryTileAsync(void* secondaryTile, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().RequestPinSecondaryTileAsync(*reinterpret_cast<Windows::UI::StartScreen::SecondaryTile const*>(&secondaryTile)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall TryUnpinSecondaryTileAsync(void* tileId, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncOperation<bool>>(this->shim().TryUnpinSecondaryTileAsync(*reinterpret_cast<hstring const*>(&tileId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics> : produce_base<D, Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::ITaskbarManagerStatics> : produce_base<D, Windows::UI::Shell::ITaskbarManagerStatics>
    {
        int32_t __stdcall GetDefault(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::TaskbarManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTab> : produce_base<D, Windows::UI::Shell::IWindowTab>
    {
        int32_t __stdcall get_Tag(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::IInspectable>(this->shim().Tag());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Tag(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<Windows::Foundation::IInspectable const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Icon(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTabIcon>(this->shim().Icon());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Icon(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Icon(*reinterpret_cast<Windows::UI::Shell::WindowTabIcon const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_TreatAsSecondaryTileId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().TreatAsSecondaryTileId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_TreatAsSecondaryTileId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TreatAsSecondaryTileId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Group(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTabGroup>(this->shim().Group());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Group(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Group(*reinterpret_cast<Windows::UI::Shell::WindowTabGroup const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall ReportThumbnailAvailable() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ReportThumbnailAvailable();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabCloseRequestedEventArgs> : produce_base<D, Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        int32_t __stdcall get_Tab(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTab>(this->shim().Tab());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabCollection> : produce_base<D, Windows::UI::Shell::IWindowTabCollection>
    {
        int32_t __stdcall MoveTab(void* tab, uint32_t index) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().MoveTab(*reinterpret_cast<Windows::UI::Shell::WindowTab const*>(&tab), index);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabGroup> : produce_base<D, Windows::UI::Shell::IWindowTabGroup>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Icon(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTabIcon>(this->shim().Icon());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Icon(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Icon(*reinterpret_cast<Windows::UI::Shell::WindowTabIcon const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabIcon> : produce_base<D, Windows::UI::Shell::IWindowTabIcon>
    {
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabIconStatics> : produce_base<D, Windows::UI::Shell::IWindowTabIconStatics>
    {
        int32_t __stdcall CreateFromFontGlyph(void* glyph, void* fontFamily, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::WindowTabIcon>(this->shim().CreateFromFontGlyph(*reinterpret_cast<hstring const*>(&glyph), *reinterpret_cast<hstring const*>(&fontFamily)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromFontGlyphWithUri(void* glyph, void* fontFamily, void* fontUri, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::WindowTabIcon>(this->shim().CreateFromFontGlyph(*reinterpret_cast<hstring const*>(&glyph), *reinterpret_cast<hstring const*>(&fontFamily), *reinterpret_cast<Windows::Foundation::Uri const*>(&fontUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateFromImage(void* image, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::WindowTabIcon>(this->shim().CreateFromImage(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&image)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabManager> : produce_base<D, Windows::UI::Shell::IWindowTabManager>
    {
        int32_t __stdcall get_Tabs(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTabCollection>(this->shim().Tabs());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SetActiveTab(void* tab) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetActiveTab(*reinterpret_cast<Windows::UI::Shell::WindowTab const*>(&tab));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_TabSwitchRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TabSwitchRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TabSwitchRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TabSwitchRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TabCloseRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TabCloseRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TabCloseRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TabCloseRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TabTearOutRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TabTearOutRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TabTearOutRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TabTearOutRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_TabThumbnailRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().TabThumbnailRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_TabThumbnailRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().TabThumbnailRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabManagerStatics> : produce_base<D, Windows::UI::Shell::IWindowTabManagerStatics>
    {
        int32_t __stdcall GetForWindow(uint64_t windowId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::UI::Shell::WindowTabManager>(this->shim().GetForWindow(windowId));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsTabTearOutSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsTabTearOutSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs> : produce_base<D, Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        int32_t __stdcall get_Tab(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTab>(this->shim().Tab());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs> : produce_base<D, Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        int32_t __stdcall get_Tab(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTab>(this->shim().Tab());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_WindowId(uint64_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<uint64_t>(this->shim().WindowId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_WindowId(uint64_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().WindowId(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs> : produce_base<D, Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        int32_t __stdcall get_Tab(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::UI::Shell::WindowTab>(this->shim().Tab());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestedSize(struct struct_Windows_Graphics_Imaging_BitmapSize* value) noexcept final try
        {
            zero_abi<Windows::Graphics::Imaging::BitmapSize>(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Graphics::Imaging::BitmapSize>(this->shim().RequestedSize());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Image(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IRandomAccessStreamReference>(this->shim().Image());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Image(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Image(*reinterpret_cast<Windows::Storage::Streams::IRandomAccessStreamReference const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Deferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsCompositedOnWindow(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsCompositedOnWindow());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
namespace winrt::Windows::UI::Shell
{
    inline auto AdaptiveCardBuilder::CreateAdaptiveCardFromJson(param::hstring const& value)
    {
        return impl::call_factory<AdaptiveCardBuilder, Windows::UI::Shell::IAdaptiveCardBuilderStatics>([&](auto&& f) { return f.CreateAdaptiveCardFromJson(value); });
    }
    inline SecurityAppManager::SecurityAppManager() :
        SecurityAppManager(impl::call_factory<SecurityAppManager>([](auto&& f) { return f.template ActivateInstance<SecurityAppManager>(); }))
    {
    }
    inline auto TaskbarManager::GetDefault()
    {
        return impl::call_factory<TaskbarManager, Windows::UI::Shell::ITaskbarManagerStatics>([&](auto&& f) { return f.GetDefault(); });
    }
    inline WindowTab::WindowTab() :
        WindowTab(impl::call_factory<WindowTab>([](auto&& f) { return f.template ActivateInstance<WindowTab>(); }))
    {
    }
    inline WindowTabGroup::WindowTabGroup() :
        WindowTabGroup(impl::call_factory<WindowTabGroup>([](auto&& f) { return f.template ActivateInstance<WindowTabGroup>(); }))
    {
    }
    inline auto WindowTabIcon::CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily)
    {
        return impl::call_factory<WindowTabIcon, Windows::UI::Shell::IWindowTabIconStatics>([&](auto&& f) { return f.CreateFromFontGlyph(glyph, fontFamily); });
    }
    inline auto WindowTabIcon::CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri)
    {
        return impl::call_factory<WindowTabIcon, Windows::UI::Shell::IWindowTabIconStatics>([&](auto&& f) { return f.CreateFromFontGlyph(glyph, fontFamily, fontUri); });
    }
    inline auto WindowTabIcon::CreateFromImage(Windows::Storage::Streams::IRandomAccessStreamReference const& image)
    {
        return impl::call_factory<WindowTabIcon, Windows::UI::Shell::IWindowTabIconStatics>([&](auto&& f) { return f.CreateFromImage(image); });
    }
    inline auto WindowTabManager::GetForWindow(uint64_t windowId)
    {
        return impl::call_factory<WindowTabManager, Windows::UI::Shell::IWindowTabManagerStatics>([&](auto&& f) { return f.GetForWindow(windowId); });
    }
    inline auto WindowTabManager::IsSupported()
    {
        return impl::call_factory<WindowTabManager, Windows::UI::Shell::IWindowTabManagerStatics>([&](auto&& f) { return f.IsSupported(); });
    }
    inline auto WindowTabManager::IsTabTearOutSupported()
    {
        return impl::call_factory<WindowTabManager, Windows::UI::Shell::IWindowTabManagerStatics>([&](auto&& f) { return f.IsTabTearOutSupported(); });
    }
}
namespace std
{
    template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCard> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IAdaptiveCard> {};
    template<> struct hash<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IAdaptiveCardBuilderStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::ISecurityAppManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ISecurityAppManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManager2> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManager2> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::ITaskbarManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::ITaskbarManagerStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTab> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTab> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabCloseRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabCollection> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabCollection> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabGroup> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabGroup> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabIcon> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabIcon> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabIconStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabIconStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabManagerStatics> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabManagerStatics> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::AdaptiveCardBuilder> : winrt::impl::hash_base<winrt::Windows::UI::Shell::AdaptiveCardBuilder> {};
    template<> struct hash<winrt::Windows::UI::Shell::SecurityAppManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::SecurityAppManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::TaskbarManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::TaskbarManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTab> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTab> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabCloseRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabCollection> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabCollection> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabGroup> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabGroup> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabIcon> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabIcon> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabManager> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabManager> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> {};
    template<> struct hash<winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> : winrt::impl::hash_base<winrt::Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> {};
}
#endif
