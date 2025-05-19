// C++/WinRT v2.0.190620.2

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Gaming_Input_Preview_2_H
#define WINRT_Windows_Gaming_Input_Preview_2_H
#include "winrt/impl/Windows.Gaming.Input.1.h"
#include "winrt/impl/Windows.Gaming.Input.Custom.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.Gaming.Input.Preview.1.h"
namespace winrt::Windows::Gaming::Input::Preview
{
    struct HeadsetGeqGains
    {
        int32_t band1Gain;
        int32_t band2Gain;
        int32_t band3Gain;
        int32_t band4Gain;
        int32_t band5Gain;
    };
    inline bool operator==(HeadsetGeqGains const& left, HeadsetGeqGains const& right) noexcept
    {
        return left.band1Gain == right.band1Gain && left.band2Gain == right.band2Gain && left.band3Gain == right.band3Gain && left.band4Gain == right.band4Gain && left.band5Gain == right.band5Gain;
    }
    inline bool operator!=(HeadsetGeqGains const& left, HeadsetGeqGains const& right) noexcept
    {
        return !(left == right);
    }
    struct GameControllerProviderInfo
    {
        GameControllerProviderInfo() = delete;
        static auto GetParentProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
        static auto GetProviderId(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
    };
    struct __declspec(empty_bases) LegacyGipGameControllerProvider : Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider
    {
        LegacyGipGameControllerProvider(std::nullptr_t) noexcept {}
        LegacyGipGameControllerProvider(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Gaming::Input::Preview::ILegacyGipGameControllerProvider(ptr, take_ownership_from_abi) {}
        static auto FromGameController(Windows::Gaming::Input::IGameController const& controller);
        static auto FromGameControllerProvider(Windows::Gaming::Input::Custom::IGameControllerProvider const& provider);
        static auto PairPilotToCopilot(Windows::System::User const& user, param::hstring const& pilotControllerProviderId, param::hstring const& copilotControllerProviderId);
        static auto ClearPairing(Windows::System::User const& user, param::hstring const& controllerProviderId);
        static auto IsPilot(Windows::System::User const& user, param::hstring const& controllerProviderId);
        static auto IsCopilot(Windows::System::User const& user, param::hstring const& controllerProviderId);
    };
}
#endif
