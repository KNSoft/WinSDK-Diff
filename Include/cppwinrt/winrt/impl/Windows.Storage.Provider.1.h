// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Provider_1_H
#define WINRT_Windows_Storage_Provider_1_H
#include "winrt/impl/Windows.Storage.Provider.0.h"
namespace winrt::Windows::Storage::Provider
{
    struct __declspec(empty_bases) ICachedFileUpdaterStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterStatics>
    {
        ICachedFileUpdaterStatics(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI>
    {
        ICachedFileUpdaterUI(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) ICachedFileUpdaterUI2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICachedFileUpdaterUI2>,
        impl::require<Windows::Storage::Provider::ICachedFileUpdaterUI2, Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        ICachedFileUpdaterUI2(std::nullptr_t = nullptr) noexcept {}
        ICachedFileUpdaterUI2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest>
    {
        IFileUpdateRequest(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequest2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequest2>,
        impl::require<Windows::Storage::Provider::IFileUpdateRequest2, Windows::Storage::Provider::IFileUpdateRequest>
    {
        IFileUpdateRequest2(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequest2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequestDeferral :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestDeferral>
    {
        IFileUpdateRequestDeferral(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequestDeferral(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IFileUpdateRequestedEventArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IFileUpdateRequestedEventArgs>
    {
        IFileUpdateRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IFileUpdateRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderFileTypeInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderFileTypeInfo>
    {
        IStorageProviderFileTypeInfo(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderFileTypeInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderFileTypeInfoFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderFileTypeInfoFactory>
    {
        IStorageProviderFileTypeInfoFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderFileTypeInfoFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderGetContentInfoForPathResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderGetContentInfoForPathResult>
    {
        IStorageProviderGetContentInfoForPathResult(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderGetContentInfoForPathResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderGetPathForContentUriResult :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderGetPathForContentUriResult>
    {
        IStorageProviderGetPathForContentUriResult(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderGetPathForContentUriResult(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemPropertiesStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertiesStatics>
    {
        IStorageProviderItemPropertiesStatics(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemPropertiesStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemProperty :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemProperty>
    {
        IStorageProviderItemProperty(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemProperty(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemPropertyDefinition :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertyDefinition>
    {
        IStorageProviderItemPropertyDefinition(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemPropertyDefinition(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderItemPropertySource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderItemPropertySource>
    {
        IStorageProviderItemPropertySource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderItemPropertySource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderKnownFolderEntry :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderKnownFolderEntry>
    {
        IStorageProviderKnownFolderEntry(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderKnownFolderEntry(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderKnownFolderSyncInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderKnownFolderSyncInfo>
    {
        IStorageProviderKnownFolderSyncInfo(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderKnownFolderSyncInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderKnownFolderSyncInfoSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderKnownFolderSyncInfoSource>
    {
        IStorageProviderKnownFolderSyncInfoSource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderKnownFolderSyncInfoSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderKnownFolderSyncInfoSourceFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderKnownFolderSyncInfoSourceFactory>
    {
        IStorageProviderKnownFolderSyncInfoSourceFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderKnownFolderSyncInfoSourceFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderKnownFolderSyncRequestArgs :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderKnownFolderSyncRequestArgs>
    {
        IStorageProviderKnownFolderSyncRequestArgs(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderKnownFolderSyncRequestArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderMoreInfoUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderMoreInfoUI>
    {
        IStorageProviderMoreInfoUI(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderMoreInfoUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderPropertyCapabilities :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderPropertyCapabilities>
    {
        IStorageProviderPropertyCapabilities(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderPropertyCapabilities(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderQuotaUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderQuotaUI>
    {
        IStorageProviderQuotaUI(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderQuotaUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderStatusUI :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderStatusUI>
    {
        IStorageProviderStatusUI(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderStatusUI(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderStatusUISource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderStatusUISource>
    {
        IStorageProviderStatusUISource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderStatusUISource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderStatusUISourceFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderStatusUISourceFactory>
    {
        IStorageProviderStatusUISourceFactory(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderStatusUISourceFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootInfo :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo>
    {
        IStorageProviderSyncRootInfo(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootInfo(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootInfo2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo2>
    {
        IStorageProviderSyncRootInfo2(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootInfo2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootInfo3 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootInfo3>
    {
        IStorageProviderSyncRootInfo3(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootInfo3(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootManagerStatics :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootManagerStatics>
    {
        IStorageProviderSyncRootManagerStatics(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootManagerStatics(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderSyncRootManagerStatics2 :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderSyncRootManagerStatics2>
    {
        IStorageProviderSyncRootManagerStatics2(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderSyncRootManagerStatics2(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderUICommand :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderUICommand>
    {
        IStorageProviderUICommand(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderUICommand(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct __declspec(empty_bases) IStorageProviderUriSource :
        Windows::Foundation::IInspectable,
        impl::consume_t<IStorageProviderUriSource>
    {
        IStorageProviderUriSource(std::nullptr_t = nullptr) noexcept {}
        IStorageProviderUriSource(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
