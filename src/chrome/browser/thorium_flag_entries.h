// Copyright (c) 2022 Alex313031. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_THORIUM_FLAG_ENTRIES_H_
#define CHROME_BROWSER_THORIUM_FLAG_ENTRIES_H_

    {"force-dark-mode",
     "Enable Dark Mode",
     "Enables dark mode for all Thorium instances.",
     kOsDesktop, SINGLE_VALUE_TYPE(switches::kForceDarkMode)},
    {"force-high-contrast",
     "Enable High Contrast Mode",
     "Enables high contrast mode for all Thorium instances.",
     kOsDesktop, SINGLE_VALUE_TYPE(switches::kForceHighContrast)},
    {"tab-outlines-in-low-contrast-themes",
     "Tab Outlines in Low Contrast Themes";
     "Expands the range of situations in which tab outline strokes are "
     "displayed, improving accessiblity in dark and incognito mode.";
     kOsDesktop, SINGLE_VALUE_TYPE(features::kTabOutlinesInLowContrastThemes)},
    {"prominent-dark-mode-active-tab-title",
     "Prominent Dark Mode Active Tab Titles";
     "Makes the active tab title in dark mode bolder so the active tab is "
     "easier to identify.";
     kOsDesktop, SINGLE_VALUE_TYPE(features::kProminentDarkModeActiveTabTitle)},
    {"custom-ntp",
     "Custom New Tab Page",
     "Allows setting a custom URL for the New Tab Page (NTP). Value can be internal (e.g. `about:blank`), external (e.g. `example.com`), or local (e.g. `file:///tmp/startpage.html`). This applies for incognito windows as well when not set to a `chrome://` internal page.",
     kOsDesktop, ORIGIN_LIST_VALUE_TYPE("custom-ntp", "")},
    {"hide-sidepanel-button",
     "Hide Side Panel Button",
     "Hides the Thorium Side Panel Button.",
     kOsDesktop, SINGLE_VALUE_TYPE("hide-sidepanel-button")},
    {"autoplay-policy",
     "Disable/Enable AutoPlay",
     "Disables or Enables AutoPlay for all Thorium instances.",
     kOsDesktop, MULTI_VALUE_TYPE(kAutoplayPolicyChoices)},
    {"show-avatar-button",
     "Show/Hide the Avatar Button",
     "Show the Avatar/People/Profile button in the browser toolbar: Always, Incognito|Guest only, or Never.",
     kOsDesktop, MULTI_VALUE_TYPE(kShowAvatarButtonChoices)},
    {"webgl-msaa-sample-count",
     "WebGL MSAA Sample Count",
     "Set a default sample count for WebGL if MSAA is enabled on the GPU.",
     kOsDesktop, MULTI_VALUE_TYPE(kWebglMSAASampleCountChoices)},
    {"webgl-antialiasing-mode",
     "WebGL Anti-Aliasing Mode",
     "Set the antialiasing method used for WebGL. (None, Explicit, Implicit)",
     kOsDesktop, MULTI_VALUE_TYPE(kWebglAntialiasingModeChoices)},
    {"gpu-rasterization-msaa-sample-count",
     "Native GPU Rasterization MSAA Sample Count",
     "Set a default sample count for native GPU Rasterization if MSAA is enabled on the GPU.",
     kOsDesktop, MULTI_VALUE_TYPE(kGpuRasterizationMSAASampleCountChoices)},
    {"num-raster-threads",
     "Number of Raster Threads",
     "Specify the number of worker threads used to rasterize content.",
     kOsDesktop, MULTI_VALUE_TYPE(kNumRasterThreadsChoices)},
    {"enable-ui-devtools",
     "Enable Native UI Inspection in DevTools",
     "Enables inspection of native UI elements in devtools. Inspect at `chrome://inspect/#native-ui`",
     kOsDesktop, SINGLE_VALUE_TYPE(ui_devtools::switches::kEnableUiDevTools)},
    {"disable-webgl2",
     "Disable WebGL 2",
     "Disable WebGL 2. Useful for certain GPU/OS combinations.",
     kOsDesktop, SINGLE_VALUE_TYPE(switches::kDisableWebGL2)},
    {"enable-local-file-accesses",
     "Enable Local File Accesses",
     "Enable local file accesses. Useful for web development.",
     kOsDesktop, SINGLE_VALUE_TYPE("enable-local-file-accesses")},
    {"allow-file-access-from-files",
     "Allow File URI Access from Files",
     "By default, file:// URIs cannot read other file:// URIs. This is an override for web developers who need the old behavior for testing.",
     kOsDesktop, SINGLE_VALUE_TYPE(switches::kAllowFileAccessFromFiles)},
    {"disable-web-security",
     "Disable Web Security",
     "Don't enforce the same-origin policy; meant for website testing only.",
     kOsDesktop, SINGLE_VALUE_TYPE(switches::kDisableWebSecurity)},
    
#if BUILDFLAG(IS_WIN)
    {"enable-win7-webrtc-hw-h264-decoding",
     "Windows 7 WebRTC H.264 Hardware Decoding",
     "Enables H.264 hardware decode acceleration for WebRTC on Windows 7.",
     kOsWin, SINGLE_VALUE_TYPE(switches::kEnableWin7WebRtcHWH264Decoding)},
    {"disable-windows10-custom-titlebar",
     "Disable Custom Windows Titlebar",
     "Disables custom-drawing the window titlebar on Windows 10/11.",
     kOsWin, SINGLE_VALUE_TYPE(switches::kDisableWindows10CustomTitlebar)},
    {"enable-exclusive-audio",
     "Enable Exclusive Audio Streams",
     "Use exclusive mode audio streaming for Windows Vista and higher. Leads to lower latencies for audio streams which use the AudioParameters::AUDIO_PCM_LOW_LATENCY audio path. See https://docs.microsoft.com/en-us/windows/win32/coreaudio/exclusive-mode-streams for details.",
     kOsWin, SINGLE_VALUE_TYPE(switches::kEnableExclusiveAudio)},
#endif // BUILDFLAG(IS_WIN)

#endif  // CHROME_BROWSER_THORIUM_FLAG_ENTRIES_H_
