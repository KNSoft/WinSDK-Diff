// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_Preview_0_H
#define WINRT_Windows_Gaming_Input_Preview_0_H
namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct IMapView;
}
namespace winrt::Windows::Gaming::Input
{
    struct IGameController;
}
namespace winrt::Windows::Gaming::Input::Custom
{
    struct IGameControllerProvider;
}
namespace winrt::Windows::System
{
    struct User;
}
namespace winrt::Windows::Gaming::Input::Preview
{
    enum class DeviceCommand : int32_t
    {
        Reset = 0,
    };
    enum class GameControllerBatteryChargingState : int32_t
    {
        Unknown = 0,
        Inactive = 1,
        Active = 2,
        Error = 3,
    };
    enum class GameControllerBatteryKind : int32_t
    {
        Unknown = 0,
        None = 1,
        Standard = 2,
        Rechargeable = 3,
    };
    enum class GameControllerBatteryLevel : int32_t
    {
        Unknown = 0,
        Critical = 1,
        Low = 2,
        Medium = 3,
        Full = 4,
    };
    enum class GameControllerFirmwareCorruptReason : int32_t
    {
        Unknown = 0,
        NotCorrupt = 1,
        TwoUpCorrupt = 2,
        AppCorrupt = 3,
        RadioCorrupt = 4,
        EepromCorrupt = 5,
        SafeToUpdate = 6,
    };
    enum class HeadsetLevel : int32_t
    {
        Off = 0,
        Low = 1,
        Medium = 2,
        High = 3,
    };
    enum class HeadsetOperation : int32_t
    {
        Geq = 0,
        BassBoostGain = 1,
        SmartMute = 2,
        SideTone = 3,
        MuteLedBrightness = 4,
        SwapMixAndVolumeDials = 5,
    };
    enum class RemappingButtonCategory : int32_t
    {
        ButtonSettings = 0,
        AnalogSettings = 1,
        VibrationSettings = 2,
        ShareShortPress = 3,
        ShareShortPressMetaData = 4,
        ShareShortPressMetaDataDisplay = 5,
        ShareLongPress = 6,
        ShareLongPressMetaData = 7,
        ShareLongPressMetaDataDisplay = 8,
        ShareDoublePress = 9,
        ShareDoublePressMetaData = 10,
        ShareDoublePressMetaDataDisplay = 11,
    };
    struct IGameControllerProviderInfoStatics;
    struct ILegacyGipGameControllerProvider;
    struct ILegacyGipGameControllerProviderStatics;
    struct GameControllerProviderInfo;
    struct LegacyGipGameControllerProvider;
    struct HeadsetGeqGains;
}
namespace winrt::impl
{
    template <> struct category<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        using type = interface_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::GameControllerProviderInfo>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>
    {
        using type = class_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::DeviceCommand>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::GameControllerBatteryChargingState>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::GameControllerBatteryKind>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::GameControllerBatteryLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::GameControllerFirmwareCorruptReason>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::HeadsetLevel>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::HeadsetOperation>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::RemappingButtonCategory>
    {
        using type = enum_category;
    };
    template <> struct category<Windows::Gaming::Input::Preview::HeadsetGeqGains>
    {
        using type = struct_category<int32_t, int32_t, int32_t, int32_t, int32_t>;
    };
    template <> struct name<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.ILegacyGipGameControllerProvider" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.ILegacyGipGameControllerProviderStatics" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::GameControllerProviderInfo>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.GameControllerProviderInfo" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.LegacyGipGameControllerProvider" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::DeviceCommand>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.DeviceCommand" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::GameControllerBatteryChargingState>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.GameControllerBatteryChargingState" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::GameControllerBatteryKind>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.GameControllerBatteryKind" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::GameControllerBatteryLevel>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.GameControllerBatteryLevel" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::GameControllerFirmwareCorruptReason>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.GameControllerFirmwareCorruptReason" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::HeadsetLevel>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.HeadsetLevel" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::HeadsetOperation>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.HeadsetOperation" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::RemappingButtonCategory>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.RemappingButtonCategory" };
    };
    template <> struct name<Windows::Gaming::Input::Preview::HeadsetGeqGains>
    {
        static constexpr auto & value{ L"Windows.Gaming.Input.Preview.HeadsetGeqGains" };
    };
    template <> struct guid_storage<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        static constexpr guid value{ 0x0BE1E6C5,0xD9BD,0x44EE,{ 0x83,0x62,0x48,0x8B,0x2E,0x46,0x4B,0xFB } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        static constexpr guid value{ 0x2DA3ED52,0xFFD9,0x43E2,{ 0x82,0x5C,0x1D,0x27,0x90,0xE0,0x4D,0x14 } };
    };
    template <> struct guid_storage<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        static constexpr guid value{ 0xD40DDA17,0xB1F4,0x499A,{ 0x87,0x4C,0x70,0x95,0xAA,0xC1,0x52,0x91 } };
    };
    template <> struct default_interface<Windows::Gaming::Input::Preview::LegacyGipGameControllerProvider>
    {
        using type = Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider;
    };
    template <> struct abi<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetParentProviderId(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetProviderId(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_BatteryChargingState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BatteryKind(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_BatteryLevel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall GetDeviceFirmwareCorruptionState(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_IsFirmwareCorrupted(bool*) noexcept = 0;
            virtual int32_t __stdcall IsInterfaceSupported(winrt::guid, bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsSyntheticDevice(bool*) noexcept = 0;
            virtual int32_t __stdcall get_PreferredTypes(void**) noexcept = 0;
            virtual int32_t __stdcall ExecuteCommand(int32_t) noexcept = 0;
            virtual int32_t __stdcall SetHomeLedIntensity(uint8_t) noexcept = 0;
            virtual int32_t __stdcall GetExtendedDeviceInfo(uint32_t* __bufferSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall SetHeadsetOperation(int32_t, uint32_t, uint8_t*) noexcept = 0;
            virtual int32_t __stdcall GetHeadsetOperation(int32_t, uint32_t* __bufferSize, uint8_t**) noexcept = 0;
            virtual int32_t __stdcall get_AppCompatVersion(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall SetStandardControllerButtonRemapping(void*, bool, void*) noexcept = 0;
            virtual int32_t __stdcall GetStandardControllerButtonRemapping(void*, bool, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromGameController(void*, void**) noexcept = 0;
            virtual int32_t __stdcall FromGameControllerProvider(void*, void**) noexcept = 0;
            virtual int32_t __stdcall PairPilotToCopilot(void*, void*, void*) noexcept = 0;
            virtual int32_t __stdcall ClearPairing(void*, void*) noexcept = 0;
            virtual int32_t __stdcall IsPilot(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall IsCopilot(void*, void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics
    {
        auto GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
        auto GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
    };
    template <> struct consume<Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider
    {
        [[nodiscard]] auto BatteryChargingState() const;
        [[nodiscard]] auto BatteryKind() const;
        [[nodiscard]] auto BatteryLevel() const;
        auto GetDeviceFirmwareCorruptionState() const;
        [[nodiscard]] auto IsFirmwareCorrupted() const;
        auto IsInterfaceSupported(winrt::guid const& interfaceId) const;
        [[nodiscard]] auto IsSyntheticDevice() const;
        [[nodiscard]] auto PreferredTypes() const;
        auto ExecuteCommand(Windows::Gaming::Input::Preview::DeviceCommand const& command) const;
        auto SetHomeLedIntensity(uint8_t intensity) const;
        auto GetExtendedDeviceInfo() const;
        auto SetHeadsetOperation(Windows::Gaming::Input::Preview::HeadsetOperation const& operation, array_view<uint8_t const> buffer) const;
        auto GetHeadsetOperation(Windows::Gaming::Input::Preview::HeadsetOperation const& operation) const;
        [[nodiscard]] auto AppCompatVersion() const;
        auto SetStandardControllerButtonRemapping(Windows::System::User const& user, bool previous, param::map_view<Windows::Gaming::Input::Preview::RemappingButtonCategory, Windows::Foundation::IInspectable> const& remapping) const;
        auto GetStandardControllerButtonRemapping(Windows::System::User const& user, bool previous) const;
    };
    template <> struct consume<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProvider<D>;
    };
    template <typename D>
    struct consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics
    {
        auto FromGameController(Windows::Gaming::Input::IGameController const& controller) const;
        auto FromGameControllerProvider(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider) const;
        auto PairPilotToCopilot(Windows::System::User const& user, param::hstring const& pilotControllerProviderId, param::hstring const& copilotControllerProviderId) const;
        auto ClearPairing(Windows::System::User const& user, param::hstring const& controllerProviderId) const;
        auto IsPilot(Windows::System::User const& user, param::hstring const& controllerProviderId) const;
        auto IsCopilot(Windows::System::User const& user, param::hstring const& controllerProviderId) const;
    };
    template <> struct consume<Windows::Gaming::Input::Preview::ILegacyGipGameControllerProviderStatics>
    {
        template <typename D> using type = consume_Windows_Gaming_Input_Preview_ILegacyGipGameControllerProviderStatics<D>;
    };
    struct struct_Windows_Gaming_Input_Preview_HeadsetGeqGains
    {
        int32_t band1Gain;
        int32_t band2Gain;
        int32_t band3Gain;
        int32_t band4Gain;
        int32_t band5Gain;
    };
    template <> struct abi<Windows::Gaming::Input::Preview::HeadsetGeqGains>
    {
        using type = struct_Windows_Gaming_Input_Preview_HeadsetGeqGains;
    };
}
#endif
