// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_2_H
#define WINRT_Windows_UI_Shell_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.UI.Shell.1.h"
namespace winrt::Windows::UI::Shell
{
    struct AdaptiveCardBuilder
    {
        AdaptiveCardBuilder() = delete;
        static auto CreateAdaptiveCardFromJson(param::hstring const& value);
    };
    struct __declspec(empty_bases) SecurityAppManager : Windows::UI::Shell::ISecurityAppManager
    {
        SecurityAppManager(std::nullptr_t) noexcept {}
        SecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::ISecurityAppManager(ptr, take_ownership_from_abi) {}
        SecurityAppManager();
    };
    struct __declspec(empty_bases) TaskbarManager : Windows::UI::Shell::ITaskbarManager,
        impl::require<TaskbarManager, Windows::UI::Shell::ITaskbarManager2>
    {
        TaskbarManager(std::nullptr_t) noexcept {}
        TaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::ITaskbarManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
    };
    struct __declspec(empty_bases) WindowTab : Windows::UI::Shell::IWindowTab
    {
        WindowTab(std::nullptr_t) noexcept {}
        WindowTab(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTab(ptr, take_ownership_from_abi) {}
        WindowTab();
    };
    struct __declspec(empty_bases) WindowTabCloseRequestedEventArgs : Windows::UI::Shell::IWindowTabCloseRequestedEventArgs
    {
        WindowTabCloseRequestedEventArgs(std::nullptr_t) noexcept {}
        WindowTabCloseRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabCloseRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowTabCollection : Windows::UI::Shell::IWindowTabCollection,
        impl::require<WindowTabCollection, Windows::Foundation::Collections::IIterable<Windows::UI::Shell::WindowTab>, Windows::Foundation::Collections::IVector<Windows::UI::Shell::WindowTab>>
    {
        WindowTabCollection(std::nullptr_t) noexcept {}
        WindowTabCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabCollection(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowTabGroup : Windows::UI::Shell::IWindowTabGroup
    {
        WindowTabGroup(std::nullptr_t) noexcept {}
        WindowTabGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabGroup(ptr, take_ownership_from_abi) {}
        WindowTabGroup();
    };
    struct __declspec(empty_bases) WindowTabIcon : Windows::UI::Shell::IWindowTabIcon
    {
        WindowTabIcon(std::nullptr_t) noexcept {}
        WindowTabIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabIcon(ptr, take_ownership_from_abi) {}
        static auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily);
        static auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri);
        static auto CreateFromImage(Windows::Storage::Streams::IRandomAccessStreamReference const& image);
    };
    struct __declspec(empty_bases) WindowTabManager : Windows::UI::Shell::IWindowTabManager
    {
        WindowTabManager(std::nullptr_t) noexcept {}
        WindowTabManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabManager(ptr, take_ownership_from_abi) {}
        static auto GetForWindow(uint64_t windowId);
        static auto IsSupported();
        static auto IsTabTearOutSupported();
    };
    struct __declspec(empty_bases) WindowTabSwitchRequestedEventArgs : Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs
    {
        WindowTabSwitchRequestedEventArgs(std::nullptr_t) noexcept {}
        WindowTabSwitchRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowTabTearOutRequestedEventArgs : Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs
    {
        WindowTabTearOutRequestedEventArgs(std::nullptr_t) noexcept {}
        WindowTabTearOutRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) WindowTabThumbnailRequestedEventArgs : Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs
    {
        WindowTabThumbnailRequestedEventArgs(std::nullptr_t) noexcept {}
        WindowTabThumbnailRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
