// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Shell_0_H
#define WINRT_Windows_UI_Shell_0_H
namespace winrt::Windows::ApplicationModel::Core
{
    struct AppListEntry;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
    struct Uri;
}
namespace winrt::Windows::Graphics::Imaging
{
    struct BitmapSize;
}
namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamReference;
}
namespace winrt::Windows::UI::StartScreen
{
    struct SecondaryTile;
}
namespace winrt::Windows::UI::Shell
{
    enum class SecurityAppKind : int32_t
    {
        WebProtection = 0,
    };
    enum class SecurityAppState : int32_t
    {
        Disabled = 0,
        Enabled = 1,
    };
    enum class SecurityAppSubstatus : int32_t
    {
        Undetermined = 0,
        NoActionNeeded = 1,
        ActionRecommended = 2,
        ActionNeeded = 3,
    };
    struct IAdaptiveCard;
    struct IAdaptiveCardBuilderStatics;
    struct ISecurityAppManager;
    struct ITaskbarManager;
    struct ITaskbarManager2;
    struct ITaskbarManagerDesktopAppSupportStatics;
    struct ITaskbarManagerStatics;
    struct IWindowTab;
    struct IWindowTabCloseRequestedEventArgs;
    struct IWindowTabCollection;
    struct IWindowTabGroup;
    struct IWindowTabIcon;
    struct IWindowTabIconStatics;
    struct IWindowTabManager;
    struct IWindowTabManagerStatics;
    struct IWindowTabSwitchRequestedEventArgs;
    struct IWindowTabTearOutRequestedEventArgs;
    struct IWindowTabThumbnailRequestedEventArgs;
    struct AdaptiveCardBuilder;
    struct SecurityAppManager;
    struct TaskbarManager;
    struct WindowTab;
    struct WindowTabCloseRequestedEventArgs;
    struct WindowTabCollection;
    struct WindowTabGroup;
    struct WindowTabIcon;
    struct WindowTabManager;
    struct WindowTabSwitchRequestedEventArgs;
    struct WindowTabTearOutRequestedEventArgs;
    struct WindowTabThumbnailRequestedEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Shell::IAdaptiveCard>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::ISecurityAppManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::ITaskbarManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::ITaskbarManager2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTab>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabCollection>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabGroup>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabIcon>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabIconStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabManager>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::UI::Shell::AdaptiveCardBuilder>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::SecurityAppManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::TaskbarManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTab>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabCloseRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabCollection>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabGroup>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabIcon>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabManager>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabTearOutRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::UI::Shell::SecurityAppKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Shell::SecurityAppState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::UI::Shell::SecurityAppSubstatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::UI::Shell::IAdaptiveCard>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IAdaptiveCard" };
    };
    template <> struct name<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IAdaptiveCardBuilderStatics" };
    };
    template <> struct name<Windows::UI::Shell::ISecurityAppManager>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.ISecurityAppManager" };
    };
    template <> struct name<Windows::UI::Shell::ITaskbarManager>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.ITaskbarManager" };
    };
    template <> struct name<Windows::UI::Shell::ITaskbarManager2>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.ITaskbarManager2" };
    };
    template <> struct name<Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.ITaskbarManagerDesktopAppSupportStatics" };
    };
    template <> struct name<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.ITaskbarManagerStatics" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTab>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTab" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabCloseRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabCollection" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabGroup" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabIcon>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabIcon" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabIconStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabIconStatics" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabManager>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabManager" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabManagerStatics" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabSwitchRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabTearOutRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.IWindowTabThumbnailRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::AdaptiveCardBuilder>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.AdaptiveCardBuilder" };
    };
    template <> struct name<Windows::UI::Shell::SecurityAppManager>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.SecurityAppManager" };
    };
    template <> struct name<Windows::UI::Shell::TaskbarManager>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.TaskbarManager" };
    };
    template <> struct name<Windows::UI::Shell::WindowTab>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTab" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabCloseRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabCloseRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabCollection>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabCollection" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabGroup>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabGroup" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabIcon>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabIcon" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabManager>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabManager" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabSwitchRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabTearOutRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabTearOutRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.WindowTabThumbnailRequestedEventArgs" };
    };
    template <> struct name<Windows::UI::Shell::SecurityAppKind>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.SecurityAppKind" };
    };
    template <> struct name<Windows::UI::Shell::SecurityAppState>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.SecurityAppState" };
    };
    template <> struct name<Windows::UI::Shell::SecurityAppSubstatus>
    {
        static constexpr auto & value{ L"Windows.UI.Shell.SecurityAppSubstatus" };
    };
    template <> struct guid_storage<Windows::UI::Shell::IAdaptiveCard>
    {
        static constexpr guid value{ 0x72D0568C,0xA274,0x41CD,{ 0x82,0xA8,0x98,0x9D,0x40,0xB9,0xB0,0x5E } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        static constexpr guid value{ 0x766D8F08,0xD3FE,0x4347,{ 0xA0,0xBC,0xB9,0xEA,0x9A,0x6D,0xC2,0x8E } };
    };
    template <> struct guid_storage<Windows::UI::Shell::ISecurityAppManager>
    {
        static constexpr guid value{ 0x96AC500C,0xAED4,0x561D,{ 0xBD,0xE8,0x95,0x35,0x20,0x34,0x3A,0x2D } };
    };
    template <> struct guid_storage<Windows::UI::Shell::ITaskbarManager>
    {
        static constexpr guid value{ 0x87490A19,0x1AD9,0x49F4,{ 0xB2,0xE8,0x86,0x73,0x8D,0xC5,0xAC,0x40 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::ITaskbarManager2>
    {
        static constexpr guid value{ 0x79F0A06E,0x7B02,0x4911,{ 0x91,0x8C,0xDE,0xE0,0xBB,0xD2,0x0B,0xA4 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        static constexpr guid value{ 0xCDFEFD63,0xE879,0x4134,{ 0xB9,0xA7,0x82,0x83,0xF0,0x5F,0x94,0x80 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        static constexpr guid value{ 0xDB32AB74,0xDE52,0x4FE6,{ 0xB7,0xB6,0x95,0xFF,0x9F,0x83,0x95,0xDF } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTab>
    {
        static constexpr guid value{ 0x551E776A,0x7928,0x4D60,{ 0xBD,0xD9,0x67,0x2B,0x5A,0x57,0x58,0xEB } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        static constexpr guid value{ 0x477282E9,0xEEC4,0x5882,{ 0x98,0x89,0x2D,0xD6,0x4D,0x0F,0x9F,0xB6 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabCollection>
    {
        static constexpr guid value{ 0xACCD0D6C,0xED07,0x519A,{ 0x8C,0x33,0x17,0xE0,0x2E,0x7E,0x9B,0x0F } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabGroup>
    {
        static constexpr guid value{ 0xA9C2C4FE,0x6CFE,0x449C,{ 0x8B,0x57,0x57,0x56,0x77,0x1A,0xBE,0x56 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabIcon>
    {
        static constexpr guid value{ 0xF92F398F,0x3669,0x4D0C,{ 0xA1,0x83,0x14,0xDD,0xAE,0x6F,0x65,0x38 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabIconStatics>
    {
        static constexpr guid value{ 0x2E18D95E,0x2CBB,0x4084,{ 0xAF,0x0C,0x36,0xEE,0x1C,0x2D,0x54,0xB1 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabManager>
    {
        static constexpr guid value{ 0x97B3C697,0xF43A,0x43E7,{ 0xB3,0xA2,0xE8,0x89,0xA9,0x83,0x55,0x99 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        static constexpr guid value{ 0x76755668,0x45F0,0x4E0B,{ 0x81,0x72,0x4E,0x6D,0x9D,0x0F,0x87,0xBD } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        static constexpr guid value{ 0x7CBC421A,0x58A4,0x568B,{ 0xA3,0x51,0xF8,0xA9,0x47,0xA5,0xAA,0xD8 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        static constexpr guid value{ 0x17D66659,0x5005,0x5ECE,{ 0x99,0xAF,0x56,0x63,0x06,0xE7,0x36,0x42 } };
    };
    template <> struct guid_storage<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        static constexpr guid value{ 0x2D558E54,0x9C4E,0x5ABC,{ 0xAB,0x72,0x33,0x50,0xFB,0x49,0x37,0xA0 } };
    };
    template <> struct default_interface<Windows::UI::Shell::SecurityAppManager>
    {
        using type = Windows::UI::Shell::ISecurityAppManager;
    };
    template <> struct default_interface<Windows::UI::Shell::TaskbarManager>
    {
        using type = Windows::UI::Shell::ITaskbarManager;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTab>
    {
        using type = Windows::UI::Shell::IWindowTab;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabCloseRequestedEventArgs>
    {
        using type = Windows::UI::Shell::IWindowTabCloseRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabCollection>
    {
        using type = Windows::UI::Shell::IWindowTabCollection;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabGroup>
    {
        using type = Windows::UI::Shell::IWindowTabGroup;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabIcon>
    {
        using type = Windows::UI::Shell::IWindowTabIcon;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabManager>
    {
        using type = Windows::UI::Shell::IWindowTabManager;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabSwitchRequestedEventArgs>
    {
        using type = Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabTearOutRequestedEventArgs>
    {
        using type = Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs;
    };
    template <> struct default_interface<Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs>
    {
        using type = Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs;
    };
    template <> struct abi<Windows::UI::Shell::IAdaptiveCard>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ToJson(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateAdaptiveCardFromJson(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ISecurityAppManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Register(int32_t, void*, void*, bool, winrt::guid*) noexcept = 0;
            virtual int32_t __stdcall Unregister(int32_t, winrt::guid) noexcept = 0;
            virtual int32_t __stdcall UpdateState(int32_t, winrt::guid, int32_t, int32_t, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPinningAllowed(bool*) noexcept = 0;
            virtual int32_t __stdcall IsCurrentAppPinnedAsync(void**) noexcept = 0;
            virtual int32_t __stdcall IsAppListEntryPinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinCurrentAppAsync(void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinAppListEntryAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManager2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsSecondaryTilePinnedAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall RequestPinSecondaryTileAsync(void*, void**) noexcept = 0;
            virtual int32_t __stdcall TryUnpinSecondaryTileAsync(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetDefault(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTab>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tag(void**) noexcept = 0;
            virtual int32_t __stdcall put_Tag(void*) noexcept = 0;
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
            virtual int32_t __stdcall get_TreatAsSecondaryTileId(void**) noexcept = 0;
            virtual int32_t __stdcall put_TreatAsSecondaryTileId(void*) noexcept = 0;
            virtual int32_t __stdcall get_Group(void**) noexcept = 0;
            virtual int32_t __stdcall put_Group(void*) noexcept = 0;
            virtual int32_t __stdcall ReportThumbnailAvailable() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabCollection>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall MoveTab(void*, uint32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabGroup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Title(void**) noexcept = 0;
            virtual int32_t __stdcall put_Title(void*) noexcept = 0;
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabIcon>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabIconStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateFromFontGlyph(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromFontGlyphWithUri(void*, void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateFromImage(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabManager>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tabs(void**) noexcept = 0;
            virtual int32_t __stdcall SetActiveTab(void*) noexcept = 0;
            virtual int32_t __stdcall add_TabSwitchRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabSwitchRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabCloseRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabCloseRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabTearOutRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabTearOutRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_TabThumbnailRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_TabThumbnailRequested(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetForWindow(uint64_t, void**) noexcept = 0;
            virtual int32_t __stdcall IsSupported(bool*) noexcept = 0;
            virtual int32_t __stdcall IsTabTearOutSupported(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
            virtual int32_t __stdcall get_WindowId(uint64_t*) noexcept = 0;
            virtual int32_t __stdcall put_WindowId(uint64_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Tab(void**) noexcept = 0;
            virtual int32_t __stdcall get_RequestedSize(struct struct_Windows_Graphics_Imaging_BitmapSize*) noexcept = 0;
            virtual int32_t __stdcall get_Image(void**) noexcept = 0;
            virtual int32_t __stdcall put_Image(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsCompositedOnWindow(bool*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCard
    {
        auto ToJson() const;
    };
    template <> struct consume<Windows::UI::Shell::IAdaptiveCard>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCard<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics
    {
        auto CreateAdaptiveCardFromJson(param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Shell::IAdaptiveCardBuilderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IAdaptiveCardBuilderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ISecurityAppManager
    {
        auto Register(Windows::UI::Shell::SecurityAppKind const& kind, param::hstring const& displayName, Windows::Foundation::Uri const& detailsUri, bool registerPerUser) const;
        auto Unregister(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration) const;
        auto UpdateState(Windows::UI::Shell::SecurityAppKind const& kind, winrt::guid const& guidRegistration, Windows::UI::Shell::SecurityAppState const& state, Windows::UI::Shell::SecurityAppSubstatus const& substatus, Windows::Foundation::Uri const& detailsUri) const;
    };
    template <> struct consume<Windows::UI::Shell::ISecurityAppManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ISecurityAppManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager
    {
        [[nodiscard]] auto IsSupported() const;
        [[nodiscard]] auto IsPinningAllowed() const;
        auto IsCurrentAppPinnedAsync() const;
        auto IsAppListEntryPinnedAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
        auto RequestPinCurrentAppAsync() const;
        auto RequestPinAppListEntryAsync(Windows::ApplicationModel::Core::AppListEntry const& appListEntry) const;
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManager2
    {
        auto IsSecondaryTilePinnedAsync(param::hstring const& tileId) const;
        auto RequestPinSecondaryTileAsync(Windows::UI::StartScreen::SecondaryTile const& secondaryTile) const;
        auto TryUnpinSecondaryTileAsync(param::hstring const& tileId) const;
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManager2>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManager2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManagerDesktopAppSupportStatics
    {
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManagerDesktopAppSupportStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerDesktopAppSupportStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_ITaskbarManagerStatics
    {
        auto GetDefault() const;
    };
    template <> struct consume<Windows::UI::Shell::ITaskbarManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_ITaskbarManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTab
    {
        [[nodiscard]] auto Tag() const;
        auto Tag(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(Windows::UI::Shell::WindowTabIcon const& value) const;
        [[nodiscard]] auto TreatAsSecondaryTileId() const;
        auto TreatAsSecondaryTileId(param::hstring const& value) const;
        [[nodiscard]] auto Group() const;
        auto Group(Windows::UI::Shell::WindowTabGroup const& value) const;
        auto ReportThumbnailAvailable() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTab>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTab<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabCloseRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabCloseRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabCollection
    {
        auto MoveTab(Windows::UI::Shell::WindowTab const& tab, uint32_t index) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabCollection>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabCollection<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabGroup
    {
        [[nodiscard]] auto Title() const;
        auto Title(param::hstring const& value) const;
        [[nodiscard]] auto Icon() const;
        auto Icon(Windows::UI::Shell::WindowTabIcon const& value) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabGroup>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabGroup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabIcon
    {
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabIcon>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabIcon<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabIconStatics
    {
        auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily) const;
        auto CreateFromFontGlyph(param::hstring const& glyph, param::hstring const& fontFamily, Windows::Foundation::Uri const& fontUri) const;
        auto CreateFromImage(Windows::Storage::Streams::IRandomAccessStreamReference const& image) const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabIconStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabIconStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabManager
    {
        [[nodiscard]] auto Tabs() const;
        auto SetActiveTab(Windows::UI::Shell::WindowTab const& tab) const;
        auto TabSwitchRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const;
        using TabSwitchRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabSwitchRequested>;
        TabSwitchRequested_revoker TabSwitchRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabSwitchRequestedEventArgs> const& handler) const;
        auto TabSwitchRequested(winrt::event_token const& token) const noexcept;
        auto TabCloseRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const;
        using TabCloseRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabCloseRequested>;
        TabCloseRequested_revoker TabCloseRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabCloseRequestedEventArgs> const& handler) const;
        auto TabCloseRequested(winrt::event_token const& token) const noexcept;
        auto TabTearOutRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const& handler) const;
        using TabTearOutRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabTearOutRequested>;
        TabTearOutRequested_revoker TabTearOutRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabTearOutRequestedEventArgs> const& handler) const;
        auto TabTearOutRequested(winrt::event_token const& token) const noexcept;
        auto TabThumbnailRequested(Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const;
        using TabThumbnailRequested_revoker = impl::event_revoker<Windows::UI::Shell::IWindowTabManager, &impl::abi_t<Windows::UI::Shell::IWindowTabManager>::remove_TabThumbnailRequested>;
        TabThumbnailRequested_revoker TabThumbnailRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Shell::WindowTabManager, Windows::UI::Shell::WindowTabThumbnailRequestedEventArgs> const& handler) const;
        auto TabThumbnailRequested(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabManager>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabManager<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabManagerStatics
    {
        auto GetForWindow(uint64_t windowId) const;
        auto IsSupported() const;
        auto IsTabTearOutSupported() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabManagerStatics>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabManagerStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabSwitchRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabSwitchRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
        [[nodiscard]] auto WindowId() const;
        auto WindowId(uint64_t value) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabTearOutRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabTearOutRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs
    {
        [[nodiscard]] auto Tab() const;
        [[nodiscard]] auto RequestedSize() const;
        [[nodiscard]] auto Image() const;
        auto Image(Windows::Storage::Streams::IRandomAccessStreamReference const& value) const;
        auto GetDeferral() const;
        [[nodiscard]] auto IsCompositedOnWindow() const;
    };
    template <> struct consume<Windows::UI::Shell::IWindowTabThumbnailRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Shell_IWindowTabThumbnailRequestedEventArgs<D>;
    };
}
#endif
