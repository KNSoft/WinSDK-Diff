// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_1_H
#define WINRT_Windows_UI_Shell_1_H
#include "winrt/impl/Windows.UI.Shell.0.h"
namespace winrt::Windows::UI::Shell
{
    struct __declspec(empty_bases) IAdaptiveCard :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCard>
    {
        IAdaptiveCard(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCard(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IAdaptiveCardBuilderStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IAdaptiveCardBuilderStatics>
    {
        IAdaptiveCardBuilderStatics(std::nullptr_t = nullptr) noexcept {}
        IAdaptiveCardBuilderStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ISecurityAppManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ISecurityAppManager>
    {
        ISecurityAppManager(std::nullptr_t = nullptr) noexcept {}
        ISecurityAppManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager>
    {
        ITaskbarManager(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManager2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManager2>,
        impl::require<Windows::UI::Shell::ITaskbarManager2, Windows::UI::Shell::ITaskbarManager>
    {
        ITaskbarManager2(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManager2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManagerDesktopAppSupportStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManagerDesktopAppSupportStatics>
    {
        ITaskbarManagerDesktopAppSupportStatics(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManagerDesktopAppSupportStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ITaskbarManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ITaskbarManagerStatics>
    {
        ITaskbarManagerStatics(std::nullptr_t = nullptr) noexcept {}
        ITaskbarManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTab :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTab>
    {
        IWindowTab(std::nullptr_t = nullptr) noexcept {}
        IWindowTab(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabCloseRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabCloseRequestedEventArgs>
    {
        IWindowTabCloseRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowTabCloseRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabCollection :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabCollection>
    {
        IWindowTabCollection(std::nullptr_t = nullptr) noexcept {}
        IWindowTabCollection(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabGroup :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabGroup>
    {
        IWindowTabGroup(std::nullptr_t = nullptr) noexcept {}
        IWindowTabGroup(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabIcon :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabIcon>
    {
        IWindowTabIcon(std::nullptr_t = nullptr) noexcept {}
        IWindowTabIcon(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabIconStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabIconStatics>
    {
        IWindowTabIconStatics(std::nullptr_t = nullptr) noexcept {}
        IWindowTabIconStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabManager :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabManager>
    {
        IWindowTabManager(std::nullptr_t = nullptr) noexcept {}
        IWindowTabManager(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabManagerStatics>
    {
        IWindowTabManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IWindowTabManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabSwitchRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabSwitchRequestedEventArgs>
    {
        IWindowTabSwitchRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowTabSwitchRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabTearOutRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabTearOutRequestedEventArgs>
    {
        IWindowTabTearOutRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowTabTearOutRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IWindowTabThumbnailRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IWindowTabThumbnailRequestedEventArgs>
    {
        IWindowTabThumbnailRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IWindowTabThumbnailRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
