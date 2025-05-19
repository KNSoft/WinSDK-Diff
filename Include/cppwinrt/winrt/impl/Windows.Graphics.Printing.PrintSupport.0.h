// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_PrintSupport_0_H
#define WINRT_Windows_Graphics_Printing_PrintSupport_0_H
namespace winrt::Windows::ApplicationModel
{
    struct AppInfo;
}
namespace winrt::Windows::Data::Xml::Dom
{
    struct XmlDocument;
}
namespace winrt::Windows::Devices::Printers
{
    struct IppPrintDevice;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Graphics::Printing::PrintTicket
{
    struct WorkflowPrintTicket;
}
namespace winrt::Windows::Graphics::Printing::PrintSupport
{
    enum class SettingsLaunchKind : int32_t
    {
        JobPrintTicket = 0,
        UserDefaultPrintTicket = 1,
    };
    enum class WorkflowPrintTicketValidationStatus : int32_t
    {
        Resolved = 0,
        Conflicting = 1,
        Invalid = 2,
    };
    struct IPrintSupportExtensionSession;
    struct IPrintSupportExtensionTriggerDetails;
    struct IPrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    struct IPrintSupportPrintTicketValidationRequestedEventArgs;
    struct IPrintSupportSessionInfo;
    struct IPrintSupportSettingsActivatedEventArgs;
    struct IPrintSupportSettingsUISession;
    struct PrintSupportExtensionSession;
    struct PrintSupportExtensionTriggerDetails;
    struct PrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    struct PrintSupportPrintTicketValidationRequestedEventArgs;
    struct PrintSupportSessionInfo;
    struct PrintSupportSettingsActivatedEventArgs;
    struct PrintSupportSettingsUISession;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionSession" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportExtensionTriggerDetails" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintDeviceCapabilitiesChangedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportPrintTicketValidationRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSessionInfo" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSettingsActivatedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.IPrintSupportSettingsUISession" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportExtensionSession" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportExtensionTriggerDetails" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintDeviceCapabilitiesChangedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportPrintTicketValidationRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportSessionInfo" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportSettingsActivatedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.PrintSupportSettingsUISession" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::SettingsLaunchKind>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.SettingsLaunchKind" };
    };
    template <> struct name<Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.PrintSupport.WorkflowPrintTicketValidationStatus" };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        static constexpr guid value{ 0xEEA45F1A,0xF4C6,0x54B3,{ 0xA0,0xB8,0xA5,0x59,0x83,0x9A,0xA4,0xC3 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        static constexpr guid value{ 0xAE083711,0x9B09,0x55D1,{ 0xA0,0xAE,0x2A,0x14,0xC5,0xF8,0x3D,0x6A } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        static constexpr guid value{ 0x15969BF0,0x9028,0x5722,{ 0x8A,0x37,0x7D,0x7C,0x34,0xB4,0x1D,0xD6 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        static constexpr guid value{ 0x338E4E69,0xDB55,0x55C7,{ 0x83,0x38,0xEF,0x64,0x68,0x0A,0x8F,0x90 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        static constexpr guid value{ 0x852149AF,0x777D,0x53E9,{ 0x9E,0xE9,0x45,0xD3,0xF4,0xB5,0xBE,0x9C } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        static constexpr guid value{ 0x1E1B565E,0xA013,0x55EA,{ 0x9B,0x8C,0xEE,0xA3,0x9D,0x9F,0xB6,0xC1 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        static constexpr guid value{ 0xC6DA2251,0x83C3,0x55E4,{ 0xA0,0xF8,0x5D,0xE8,0xB0,0x62,0xAD,0xBF } };
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionTriggerDetails>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportSessionInfo>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsActivatedEventArgs>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::PrintSupport::PrintSupportSettingsUISession>
    {
        using type = Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession;
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
            virtual int32_t __stdcall add_PrintTicketValidationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintTicketValidationRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PrintDeviceCapabilitiesChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrintDeviceCapabilitiesChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetCurrentPrintDeviceCapabilities(void**) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintDeviceCapabilities(void*) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall SetPrintTicketValidationStatus(int32_t) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppInfo(void**) noexcept = 0;
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SessionPrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall get_DocumentTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_LaunchKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall UpdatePrintTicket(void*) noexcept = 0;
            virtual int32_t __stdcall get_SessionInfo(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession
    {
        [[nodiscard]] auto Printer() const;
        auto PrintTicketValidationRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const;
        using PrintTicketValidationRequested_revoker = impl::event_revoker<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession, &impl::abi_t<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>::remove_PrintTicketValidationRequested>;
        PrintTicketValidationRequested_revoker PrintTicketValidationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintTicketValidationRequestedEventArgs> const& handler) const;
        auto PrintTicketValidationRequested(winrt::event_token const& token) const noexcept;
        auto PrintDeviceCapabilitiesChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const;
        using PrintDeviceCapabilitiesChanged_revoker = impl::event_revoker<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession, &impl::abi_t<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>::remove_PrintDeviceCapabilitiesChanged>;
        PrintDeviceCapabilitiesChanged_revoker PrintDeviceCapabilitiesChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::PrintSupport::PrintSupportExtensionSession, Windows::Graphics::Printing::PrintSupport::PrintSupportPrintDeviceCapabilitiesChangedEventArgs> const& handler) const;
        auto PrintDeviceCapabilitiesChanged(winrt::event_token const& token) const noexcept;
        auto Start() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails
    {
        [[nodiscard]] auto Session() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportExtensionTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportExtensionTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs
    {
        auto GetCurrentPrintDeviceCapabilities() const;
        auto UpdatePrintDeviceCapabilities(Windows::Data::Xml::Dom::XmlDocument const& updatedPdc) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintDeviceCapabilitiesChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintDeviceCapabilitiesChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs
    {
        [[nodiscard]] auto PrintTicket() const;
        auto SetPrintTicketValidationStatus(Windows::Graphics::Printing::PrintSupport::WorkflowPrintTicketValidationStatus const& status) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportPrintTicketValidationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportPrintTicketValidationRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo
    {
        [[nodiscard]] auto SourceAppInfo() const;
        [[nodiscard]] auto Printer() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportSessionInfo>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSessionInfo<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs
    {
        [[nodiscard]] auto Session() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession
    {
        [[nodiscard]] auto SessionPrintTicket() const;
        [[nodiscard]] auto DocumentTitle() const;
        [[nodiscard]] auto LaunchKind() const;
        auto UpdatePrintTicket(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& printTicket) const;
        [[nodiscard]] auto SessionInfo() const;
    };
    template <> struct consume<Windows::Graphics::Printing::PrintSupport::IPrintSupportSettingsUISession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_PrintSupport_IPrintSupportSettingsUISession<D>;
    };
}
#endif
