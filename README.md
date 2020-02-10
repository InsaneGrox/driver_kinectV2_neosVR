SteamVR driver for Kinect for XBox One / Kinect 2 for Windows without external dependencies.

# Installation
* Install [Kinect for Windows Runtime 2.0](https://www.microsoft.com/en-us/download/details.aspx?id=44559).
* Create directory 'kinectV2' in 'SteamVR/drivers' directory.
* Extract latest release archive to 'kinectV2'.
* Add line in section 'steamvr' of '<Steam_folder>/config/steamvr.vrsettings' file:
  ```JSON
  "activateMultipleDrivers": true,
  ```

# Calibration
* Launch 'kinect_calibrator' from 'kinectV2/bin/win##' directory.
* Allign base position using controllers to match virtual trackers with your hip and legs:
  * Left controller's touchpad: up, down, left and right.
  * Right controller's touchpad: forward, backward, rotate left and rotate right.
* Press application menu button or quit from SteamVR to save alligned base transformation.

# Usage
* Press **Ctrl-T** to disable/enable tracking.

# Building
* Install [Kinect for Windows SDK 2.0](https://www.microsoft.com/en-us/download/details.aspx?id=44561).
* Clone repository using git.
* Initialize submodules
```
git submodule update --init --depth=1
```
* Open 'driver_kinectV2.sln' solution from repository root.
