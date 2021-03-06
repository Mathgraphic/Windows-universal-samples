//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the Microsoft Public License.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#pragma once

#include "Scenario1_SetRecordProfile.g.h"
#include "MainPage.xaml.h"

namespace SDKTemplate
{
    [Windows::Foundation::Metadata::WebHostHidden]
    public ref class Scenario1_SetRecordProfile sealed
    {
    public:
        Scenario1_SetRecordProfile();

    protected:
        virtual void OnNavigatedTo(Windows::UI::Xaml::Navigation::NavigationEventArgs^ e) override;

    private:
        MainPage^ _rootPage;
        void InitRecordProfileBtn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
        void InitCustomProfileBtn_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);

        Concurrency::task<Platform::String^> GetVideoProfileSupportedDeviceIdAsync(Windows::Devices::Enumeration::Panel panel);

        Concurrency::task<void> LogStatusToOutputBoxAsync(Platform::String^ message);
        Concurrency::task<void> LogStatusAsync(Platform::String^ message, NotifyType type);
        Concurrency::task<void> PrintProfileInformation(Windows::Media::Capture::MediaCaptureVideoProfile^ profile,
            Windows::Media::Capture::MediaCaptureVideoProfileMediaDescription^ description);
    };
}
