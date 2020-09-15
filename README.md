Please go and show the original author SDraw some support for creating the original driver this is forked from, thanks!

SteamVR driver for Kinect for XBox One / Kinect 2 for Windows 64 bit, NeosVR Edition.

# Usage benefits
* No additional dependencies for SteamVR ([OpenVR InputEmulator](https://github.com/matzman666/OpenVR-InputEmulator) and others).
* [Linear smoothing of movement](https://twitter.com/SDraw_/status/1231987403721756672) for bypassing Kinect's 30 frames per second capture. 
* Emulates 8 tracking points instead of 3 ( https://www.youtube.com/watch?v=eTad62qw4Rw )

# Installation
* Install [Kinect for Windows Runtime 2.0](https://www.microsoft.com/en-us/download/details.aspx?id=44559).
* Extract latest release archive to `<SteamVR_folder>/drivers`.
* Add line in section `steamvr` of `<Steam_folder>/config/steamvr.vrsettings` file:
  ```JSON
  "activateMultipleDrivers": true,
  ```

# Calibration
* Launch `kinect_calibrator` from `<SteamVR_folder>/drivers/kinectV2/bin/win64` directory.
* Allign base position using controllers to match virtual trackers with your hip and legs:
  * Left controller's touchpad/joystick: rotate left, rotate right, rotate up, rotate down. Press grip to reset rotation.
  * Right controller's touchpad/joystick: move right, move left, move up, move down. Press grip to reset position.
    * If trigger is pressed: move forward, move backward.
* Press application menu button, b, or y button or quit from SteamVR to save alligned base transformation.

# Usage
* Press **Ctrl-T** to disable/enable tracking.
  * Alternative way: send debug message `switch` to fake base station device.

# Building
* Install [Kinect for Windows SDK 2.0](https://www.microsoft.com/en-us/download/details.aspx?id=44561).
* Clone repository using git.
* Initialize submodules
```
git submodule update --init --depth=1
```
* Open `driver_kinectV2.sln` in Visual Studio Community Edition.
