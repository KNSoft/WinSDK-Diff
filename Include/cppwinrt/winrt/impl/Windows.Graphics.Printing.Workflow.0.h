// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_Workflow_0_H
#define WINRT_Windows_Graphics_Printing_Workflow_0_H
namespace winrt::Windows::Devices::Printers
{
    struct IppAttributeValue;
    struct IppPrintDevice;
    struct IppSetAttributesResult;
}
namespace winrt::Windows::Foundation
{
    struct Deferral;
    struct EventRegistrationToken;
    struct IAsyncAction;
    template <typename TSender, typename TResult> struct TypedEventHandler;
}
namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct IIterable;
    template <typename K, typename V> struct IKeyValuePair;
}
namespace winrt::Windows::Graphics::Printing::PrintTicket
{
    struct WorkflowPrintTicket;
}
namespace winrt::Windows::Storage::Streams
{
    struct IBuffer;
    struct IInputStream;
    struct IOutputStream;
}
namespace winrt::Windows::Graphics::Printing::Workflow
{
    enum class PrintWorkflowJobAbortReason : int32_t
    {
        JobFailed = 0,
        UserCanceled = 1,
    };
    enum class PrintWorkflowPdlConversionType : int32_t
    {
        XpsToPdf = 0,
        XpsToPwgr = 1,
        XpsToPclm = 2,
    };
    enum class PrintWorkflowPrinterJobStatus : int32_t
    {
        Error = 0,
        Aborted = 1,
        InProgress = 2,
        Completed = 3,
    };
    enum class PrintWorkflowSessionStatus : int32_t
    {
        Started = 0,
        Completed = 1,
        Aborted = 2,
        Closed = 3,
        PdlDataAvailableForModification = 4,
    };
    enum class PrintWorkflowSubmittedStatus : int32_t
    {
        Succeeded = 0,
        Canceled = 1,
        Failed = 2,
    };
    enum class PrintWorkflowUICompletionStatus : int32_t
    {
        Completed = 0,
        LaunchFailed = 1,
        JobFailed = 2,
        UserCanceled = 3,
    };
    struct IPrintWorkflowBackgroundSession;
    struct IPrintWorkflowBackgroundSetupRequestedEventArgs;
    struct IPrintWorkflowConfiguration;
    struct IPrintWorkflowConfiguration2;
    struct IPrintWorkflowForegroundSession;
    struct IPrintWorkflowForegroundSetupRequestedEventArgs;
    struct IPrintWorkflowJobActivatedEventArgs;
    struct IPrintWorkflowJobBackgroundSession;
    struct IPrintWorkflowJobNotificationEventArgs;
    struct IPrintWorkflowJobStartingEventArgs;
    struct IPrintWorkflowJobTriggerDetails;
    struct IPrintWorkflowJobUISession;
    struct IPrintWorkflowObjectModelSourceFileContent;
    struct IPrintWorkflowObjectModelSourceFileContentFactory;
    struct IPrintWorkflowObjectModelTargetPackage;
    struct IPrintWorkflowPdlConverter;
    struct IPrintWorkflowPdlDataAvailableEventArgs;
    struct IPrintWorkflowPdlModificationRequestedEventArgs;
    struct IPrintWorkflowPdlSourceContent;
    struct IPrintWorkflowPdlTargetStream;
    struct IPrintWorkflowPrinterJob;
    struct IPrintWorkflowSourceContent;
    struct IPrintWorkflowSpoolStreamContent;
    struct IPrintWorkflowStreamTarget;
    struct IPrintWorkflowSubmittedEventArgs;
    struct IPrintWorkflowSubmittedOperation;
    struct IPrintWorkflowTarget;
    struct IPrintWorkflowTriggerDetails;
    struct IPrintWorkflowUIActivatedEventArgs;
    struct IPrintWorkflowUILauncher;
    struct IPrintWorkflowXpsDataAvailableEventArgs;
    struct PrintWorkflowBackgroundSession;
    struct PrintWorkflowBackgroundSetupRequestedEventArgs;
    struct PrintWorkflowConfiguration;
    struct PrintWorkflowForegroundSession;
    struct PrintWorkflowForegroundSetupRequestedEventArgs;
    struct PrintWorkflowJobActivatedEventArgs;
    struct PrintWorkflowJobBackgroundSession;
    struct PrintWorkflowJobNotificationEventArgs;
    struct PrintWorkflowJobStartingEventArgs;
    struct PrintWorkflowJobTriggerDetails;
    struct PrintWorkflowJobUISession;
    struct PrintWorkflowObjectModelSourceFileContent;
    struct PrintWorkflowObjectModelTargetPackage;
    struct PrintWorkflowPdlConverter;
    struct PrintWorkflowPdlDataAvailableEventArgs;
    struct PrintWorkflowPdlModificationRequestedEventArgs;
    struct PrintWorkflowPdlSourceContent;
    struct PrintWorkflowPdlTargetStream;
    struct PrintWorkflowPrinterJob;
    struct PrintWorkflowSourceContent;
    struct PrintWorkflowSpoolStreamContent;
    struct PrintWorkflowStreamTarget;
    struct PrintWorkflowSubmittedEventArgs;
    struct PrintWorkflowSubmittedOperation;
    struct PrintWorkflowTarget;
    struct PrintWorkflowTriggerDetails;
    struct PrintWorkflowUIActivatedEventArgs;
    struct PrintWorkflowUILauncher;
    struct PrintWorkflowXpsDataAvailableEventArgs;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContentFactory>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobActivatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowTarget>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowJobAbortReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConversionType>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJobStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Graphics::Printing::Workflow::PrintWorkflowUICompletionStatus>
    {
        using type = enum_category;
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowBackgroundSession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowBackgroundSetupRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowConfiguration" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowConfiguration2" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowForegroundSession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowForegroundSetupRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowJobActivatedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowJobBackgroundSession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowJobNotificationEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowJobStartingEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowJobTriggerDetails" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowJobUISession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowObjectModelSourceFileContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContentFactory>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowObjectModelSourceFileContentFactory" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowObjectModelTargetPackage" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowPdlConverter" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowPdlDataAvailableEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowPdlModificationRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowPdlSourceContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowPdlTargetStream" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowPrinterJob" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSourceContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSpoolStreamContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowStreamTarget" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSubmittedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowSubmittedOperation" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowTarget" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowTriggerDetails" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowUIActivatedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowUILauncher" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.IPrintWorkflowXpsDataAvailableEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowBackgroundSession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowBackgroundSetupRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowConfiguration" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowForegroundSession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowForegroundSetupRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobActivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobActivatedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobBackgroundSession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobNotificationEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobStartingEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobTriggerDetails" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobUISession" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowObjectModelSourceFileContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowObjectModelTargetPackage" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPdlConverter" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPdlDataAvailableEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPdlModificationRequestedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPdlSourceContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPdlTargetStream" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPrinterJob" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowSourceContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowSpoolStreamContent" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowStreamTarget" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowSubmittedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowSubmittedOperation" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowTarget>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowTarget" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowTriggerDetails" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowUIActivatedEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowUILauncher" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowXpsDataAvailableEventArgs" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowJobAbortReason>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowJobAbortReason" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConversionType>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPdlConversionType" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJobStatus>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowPrinterJobStatus" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowSessionStatus>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowSessionStatus" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowSubmittedStatus" };
    };
    template <> struct name<Windows::Graphics::Printing::Workflow::PrintWorkflowUICompletionStatus>
    {
        static constexpr auto & value{ L"Windows.Graphics.Printing.Workflow.PrintWorkflowUICompletionStatus" };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        static constexpr guid value{ 0x5B7913BA,0x0C5E,0x528A,{ 0x74,0x58,0x86,0xA4,0x6C,0xBD,0xDC,0x45 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        static constexpr guid value{ 0x43E97342,0x1750,0x59C9,{ 0x61,0xFB,0x38,0x37,0x48,0xA2,0x03,0x62 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        static constexpr guid value{ 0xD0AAC4ED,0xFD4B,0x5DF5,{ 0x4B,0xB6,0x8D,0x0D,0x15,0x9E,0xBE,0x3F } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        static constexpr guid value{ 0xDE350A50,0xA6D4,0x5BE2,{ 0x8B,0x9A,0x09,0xD3,0xD3,0x9E,0xA7,0x80 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        static constexpr guid value{ 0xC79B63D0,0xF8EC,0x4CEB,{ 0x95,0x3A,0xC8,0x87,0x61,0x57,0xDD,0x33 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        static constexpr guid value{ 0xBBE38247,0x9C1B,0x4DD3,{ 0x9B,0x2B,0xC8,0x04,0x68,0xD9,0x41,0xB3 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs>
    {
        static constexpr guid value{ 0xD4BD5E6D,0x034E,0x5E00,{ 0xA6,0x16,0xF9,0x61,0xA0,0x33,0xDC,0xC8 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>
    {
        static constexpr guid value{ 0xC5EC6AD8,0x20C9,0x5D51,{ 0x85,0x07,0x27,0x34,0xB4,0x6F,0x96,0xC5 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs>
    {
        static constexpr guid value{ 0x0AE16FBA,0x5398,0x5EBA,{ 0xB4,0x72,0x97,0x86,0x50,0x18,0x6A,0x9A } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs>
    {
        static constexpr guid value{ 0xE3D99BA8,0x31AD,0x5E09,{ 0xB0,0xD7,0x60,0x1B,0x97,0xF1,0x61,0xAD } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails>
    {
        static constexpr guid value{ 0xFF296129,0x60E2,0x51DB,{ 0xBA,0x8C,0xE2,0xCC,0xDD,0xB5,0x16,0xB9 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>
    {
        static constexpr guid value{ 0x00C8736B,0x7637,0x5687,{ 0xA3,0x02,0x0F,0x66,0x4D,0x2A,0xAC,0x65 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
        static constexpr guid value{ 0xC36C8A6A,0x8A2A,0x419A,{ 0xB3,0xC3,0x20,0x90,0xE6,0xBF,0xAB,0x2F } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContentFactory>
    {
        static constexpr guid value{ 0x93B1B903,0xF013,0x56D6,{ 0xB7,0x08,0x99,0xAC,0x2C,0xCB,0x12,0xEE } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
        static constexpr guid value{ 0x7D96BC74,0x9B54,0x4CA1,{ 0xAD,0x3A,0x97,0x9C,0x3D,0x44,0xDD,0xAC } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter>
    {
        static constexpr guid value{ 0x40604B62,0x0AE4,0x51F1,{ 0x81,0x8F,0x73,0x1D,0xC0,0xB0,0x05,0xAB } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs>
    {
        static constexpr guid value{ 0xD4AD6B50,0x1547,0x5991,{ 0xA0,0xEF,0xE2,0xEE,0x20,0x21,0x15,0x18 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs>
    {
        static constexpr guid value{ 0x1A339A61,0x2E13,0x5EDD,{ 0xA7,0x07,0xCE,0xEC,0x61,0xD7,0x33,0x3B } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent>
    {
        static constexpr guid value{ 0x92F7FC41,0x32B8,0x56AB,{ 0x84,0x5E,0xB1,0xE6,0x8B,0x3A,0xED,0xD5 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream>
    {
        static constexpr guid value{ 0xA742DFE5,0x1EE3,0x52A9,{ 0x9F,0x9F,0x2E,0x20,0x43,0x18,0x0F,0xD1 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob>
    {
        static constexpr guid value{ 0x12009F94,0x0D14,0x5443,{ 0xBC,0x09,0x25,0x03,0x11,0xCE,0x57,0x0B } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        static constexpr guid value{ 0x1A28C641,0xCEB1,0x4533,{ 0xBB,0x73,0xFB,0xE6,0x3E,0xEF,0xDB,0x18 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        static constexpr guid value{ 0x72E55ECE,0xE406,0x4B74,{ 0x84,0xE1,0x3F,0xF3,0xFD,0xCD,0xAF,0x70 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        static constexpr guid value{ 0xB23BBA84,0x8565,0x488B,{ 0x98,0x39,0x1C,0x9E,0x7C,0x7A,0xA9,0x16 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        static constexpr guid value{ 0x3ADD0A41,0x3794,0x5569,{ 0x5C,0x87,0x40,0xE8,0xFF,0x72,0x0F,0x83 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        static constexpr guid value{ 0x2E4E6216,0x3BE1,0x5F0F,{ 0x5C,0x81,0xA5,0xA2,0xBD,0x4E,0xAB,0x0E } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        static constexpr guid value{ 0x29DA276C,0x0A73,0x5AED,{ 0x4F,0x3D,0x97,0x0D,0x32,0x51,0xF0,0x57 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        static constexpr guid value{ 0x5739D868,0x9D86,0x4052,{ 0xB0,0xCB,0xF3,0x10,0xBE,0xCD,0x59,0xBB } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        static constexpr guid value{ 0xBC8A844D,0x09EB,0x5746,{ 0x72,0xA6,0x8D,0xC8,0xB5,0xED,0xBE,0x9B } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher>
    {
        static constexpr guid value{ 0x64E9E22F,0x14CC,0x5828,{ 0x96,0xFB,0x39,0x16,0x3F,0xB6,0xC3,0x78 } };
    };
    template <> struct guid_storage<Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        static constexpr guid value{ 0x4D11C331,0x54D1,0x434E,{ 0xBE,0x0E,0x82,0xC5,0xFA,0x58,0xE5,0xB2 } };
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowConfiguration>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowJobActivatedEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowJobTriggerDetails>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelSourceFileContent>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowObjectModelTargetPackage>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConverter>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlSourceContent>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowPdlTargetStream>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowPrinterJob>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowSourceContent>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowSpoolStreamContent>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowStreamTarget>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedOperation>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowTarget>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowTriggerDetails>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowUIActivatedEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowUILauncher>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher;
    };
    template <> struct default_interface<Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs>
    {
        using type = Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs;
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SetupRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetupRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Submitted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Submitted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUserPrintTicketAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall SetRequiresUI() noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SourceAppDisplayName(void**) noexcept = 0;
            virtual int32_t __stdcall get_JobTitle(void**) noexcept = 0;
            virtual int32_t __stdcall get_SessionId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AbortPrintFlow(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall add_SetupRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SetupRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_XpsDataAvailable(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XpsDataAvailable(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetUserPrintTicketAsync(void**) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Session(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_JobStarting(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_JobStarting(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PdlModificationRequested(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PdlModificationRequested(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrinterJob(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
            virtual int32_t __stdcall SetSkipSystemRendering() noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintWorkflowJobSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Status(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_PdlDataAvailable(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PdlDataAvailable(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_JobNotification(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_JobNotification(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall Start() noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContentFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall ConvertPdlAsync(void*, void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrinterJob(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceContent(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall get_PrinterJob(void**) noexcept = 0;
            virtual int32_t __stdcall get_SourceContent(void**) noexcept = 0;
            virtual int32_t __stdcall get_UILauncher(void**) noexcept = 0;
            virtual int32_t __stdcall CreateJobOnPrinter(void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateJobOnPrinterWithAttributes(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateJobOnPrinterWithAttributesBuffer(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetPdlConverter(int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentType(void**) noexcept = 0;
            virtual int32_t __stdcall GetInputStream(void**) noexcept = 0;
            virtual int32_t __stdcall GetContentFileAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOutputStream(void**) noexcept = 0;
            virtual int32_t __stdcall CompleteStreamSubmission(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_JobId(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Printer(void**) noexcept = 0;
            virtual int32_t __stdcall GetJobStatus(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetJobPrintTicket(void**) noexcept = 0;
            virtual int32_t __stdcall GetJobAttributesAsBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetJobAttributes(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetJobAttributesFromBuffer(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetJobAttributes(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetJobPrintTicketAsync(void**) noexcept = 0;
            virtual int32_t __stdcall GetSourceSpoolDataAsStreamContent(void**) noexcept = 0;
            virtual int32_t __stdcall GetSourceSpoolDataAsXpsObjectModel(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetInputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetOutputStream(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(void**) noexcept = 0;
            virtual int32_t __stdcall GetTarget(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Complete(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Configuration(void**) noexcept = 0;
            virtual int32_t __stdcall get_XpsContent(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetAsStream(void**) noexcept = 0;
            virtual int32_t __stdcall get_TargetAsXpsObjectModelPackage(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintWorkflowSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PrintWorkflowSession(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall IsUILaunchEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall LaunchAndCompleteUIAsync(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Operation(void**) noexcept = 0;
            virtual int32_t __stdcall GetDeferral(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession
    {
        auto SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const;
        using SetupRequested_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>::remove_SetupRequested>;
        SetupRequested_revoker SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSetupRequestedEventArgs> const& setupEventHandler) const;
        auto SetupRequested(winrt::event_token const& token) const noexcept;
        auto Submitted(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const;
        using Submitted_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>::remove_Submitted>;
        Submitted_revoker Submitted(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedEventArgs> const& submittedEventHandler) const;
        auto Submitted(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Status() const;
        auto Start() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs
    {
        auto GetUserPrintTicketAsync() const;
        [[nodiscard]] auto Configuration() const;
        auto SetRequiresUI() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowBackgroundSetupRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowBackgroundSetupRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration
    {
        [[nodiscard]] auto SourceAppDisplayName() const;
        [[nodiscard]] auto JobTitle() const;
        [[nodiscard]] auto SessionId() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration2
    {
        auto AbortPrintFlow(Windows::Graphics::Printing::Workflow::PrintWorkflowJobAbortReason const& reason) const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowConfiguration2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowConfiguration2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession
    {
        auto SetupRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const;
        using SetupRequested_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>::remove_SetupRequested>;
        SetupRequested_revoker SetupRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSetupRequestedEventArgs> const& setupEventHandler) const;
        auto SetupRequested(winrt::event_token const& token) const noexcept;
        auto XpsDataAvailable(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const;
        using XpsDataAvailable_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>::remove_XpsDataAvailable>;
        XpsDataAvailable_revoker XpsDataAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowForegroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowXpsDataAvailableEventArgs> const& xpsDataAvailableEventHandler) const;
        auto XpsDataAvailable(winrt::event_token const& token) const noexcept;
        [[nodiscard]] auto Status() const;
        auto Start() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs
    {
        auto GetUserPrintTicketAsync() const;
        [[nodiscard]] auto Configuration() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowForegroundSetupRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowForegroundSetupRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobActivatedEventArgs
    {
        [[nodiscard]] auto Session() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession
    {
        [[nodiscard]] auto Status() const;
        auto JobStarting(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs> const& handler) const;
        using JobStarting_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>::remove_JobStarting>;
        JobStarting_revoker JobStarting(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobStartingEventArgs> const& handler) const;
        auto JobStarting(winrt::event_token const& token) const noexcept;
        auto PdlModificationRequested(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs> const& handler) const;
        using PdlModificationRequested_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>::remove_PdlModificationRequested>;
        PdlModificationRequested_revoker PdlModificationRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobBackgroundSession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlModificationRequestedEventArgs> const& handler) const;
        auto PdlModificationRequested(winrt::event_token const& token) const noexcept;
        auto Start() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobBackgroundSession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobBackgroundSession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobNotificationEventArgs
    {
        [[nodiscard]] auto Configuration() const;
        [[nodiscard]] auto PrinterJob() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobNotificationEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobNotificationEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobStartingEventArgs
    {
        [[nodiscard]] auto Configuration() const;
        [[nodiscard]] auto Printer() const;
        auto SetSkipSystemRendering() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobStartingEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobStartingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobTriggerDetails
    {
        [[nodiscard]] auto PrintWorkflowJobSession() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession
    {
        [[nodiscard]] auto Status() const;
        auto PdlDataAvailable(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs> const& handler) const;
        using PdlDataAvailable_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>::remove_PdlDataAvailable>;
        PdlDataAvailable_revoker PdlDataAvailable(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowPdlDataAvailableEventArgs> const& handler) const;
        auto PdlDataAvailable(winrt::event_token const& token) const noexcept;
        auto JobNotification(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs> const& handler) const;
        using JobNotification_revoker = impl::event_revoker<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession, &impl::abi_t<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>::remove_JobNotification>;
        JobNotification_revoker JobNotification(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::Workflow::PrintWorkflowJobUISession, Windows::Graphics::Printing::Workflow::PrintWorkflowJobNotificationEventArgs> const& handler) const;
        auto JobNotification(winrt::event_token const& token) const noexcept;
        auto Start() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowJobUISession>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowJobUISession<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelSourceFileContent
    {
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContent>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelSourceFileContent<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelSourceFileContentFactory
    {
        auto CreateInstance(Windows::Storage::Streams::IInputStream const& xpsStream) const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelSourceFileContentFactory>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelSourceFileContentFactory<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelTargetPackage
    {
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowObjectModelTargetPackage>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowObjectModelTargetPackage<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlConverter
    {
        auto ConvertPdlAsync(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& printTicket, Windows::Storage::Streams::IInputStream const& inputStream, Windows::Storage::Streams::IOutputStream const& outputStream) const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlConverter>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlConverter<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlDataAvailableEventArgs
    {
        [[nodiscard]] auto Configuration() const;
        [[nodiscard]] auto PrinterJob() const;
        [[nodiscard]] auto SourceContent() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlDataAvailableEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlDataAvailableEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs
    {
        [[nodiscard]] auto Configuration() const;
        [[nodiscard]] auto PrinterJob() const;
        [[nodiscard]] auto SourceContent() const;
        [[nodiscard]] auto UILauncher() const;
        auto CreateJobOnPrinter(param::hstring const& targetContentType) const;
        auto CreateJobOnPrinterWithAttributes(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Devices::Printers::IppAttributeValue>> const& jobAttributes, param::hstring const& targetContentType) const;
        auto CreateJobOnPrinterWithAttributesBuffer(Windows::Storage::Streams::IBuffer const& jobAttributesBuffer, param::hstring const& targetContentType) const;
        auto GetPdlConverter(Windows::Graphics::Printing::Workflow::PrintWorkflowPdlConversionType const& conversionType) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlModificationRequestedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlModificationRequestedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlSourceContent
    {
        [[nodiscard]] auto ContentType() const;
        auto GetInputStream() const;
        auto GetContentFileAsync() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlSourceContent>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlSourceContent<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlTargetStream
    {
        auto GetOutputStream() const;
        auto CompleteStreamSubmission(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const& status) const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowPdlTargetStream>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPdlTargetStream<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob
    {
        [[nodiscard]] auto JobId() const;
        [[nodiscard]] auto Printer() const;
        auto GetJobStatus() const;
        auto GetJobPrintTicket() const;
        auto GetJobAttributesAsBuffer(param::iterable<hstring> const& attributeNames) const;
        auto GetJobAttributes(param::iterable<hstring> const& attributeNames) const;
        auto SetJobAttributesFromBuffer(Windows::Storage::Streams::IBuffer const& jobAttributesBuffer) const;
        auto SetJobAttributes(param::iterable<Windows::Foundation::Collections::IKeyValuePair<hstring, Windows::Devices::Printers::IppAttributeValue>> const& jobAttributes) const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowPrinterJob>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowPrinterJob<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent
    {
        auto GetJobPrintTicketAsync() const;
        auto GetSourceSpoolDataAsStreamContent() const;
        auto GetSourceSpoolDataAsXpsObjectModel() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowSourceContent>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSourceContent<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSpoolStreamContent
    {
        auto GetInputStream() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowSpoolStreamContent>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSpoolStreamContent<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowStreamTarget
    {
        auto GetOutputStream() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowStreamTarget>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowStreamTarget<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs
    {
        [[nodiscard]] auto Operation() const;
        auto GetTarget(Windows::Graphics::Printing::PrintTicket::WorkflowPrintTicket const& jobPrintTicket) const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation
    {
        auto Complete(Windows::Graphics::Printing::Workflow::PrintWorkflowSubmittedStatus const& status) const;
        [[nodiscard]] auto Configuration() const;
        [[nodiscard]] auto XpsContent() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowSubmittedOperation>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowSubmittedOperation<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget
    {
        [[nodiscard]] auto TargetAsStream() const;
        [[nodiscard]] auto TargetAsXpsObjectModelPackage() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowTarget>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTarget<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTriggerDetails
    {
        [[nodiscard]] auto PrintWorkflowSession() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowTriggerDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowTriggerDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUIActivatedEventArgs
    {
        [[nodiscard]] auto PrintWorkflowSession() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowUIActivatedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUIActivatedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUILauncher
    {
        auto IsUILaunchEnabled() const;
        auto LaunchAndCompleteUIAsync() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowUILauncher>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowUILauncher<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs
    {
        [[nodiscard]] auto Operation() const;
        auto GetDeferral() const;
    };
    template <> struct consume<Windows::Graphics::Printing::Workflow::IPrintWorkflowXpsDataAvailableEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_Workflow_IPrintWorkflowXpsDataAvailableEventArgs<D>;
    };
}
#endif
