# MopekaLCDDisplay - Propane Level Display

Like may owners of RV's, I hate running out of propane - this means no heat, no hot water, and no cooking.  I picked up a set of Mopeka Propane tank sensors (https://www.amazon.com/Mopeka-Check-Sensor-Steel-Tanks/dp/B09J6MXJKT) to help keep an eye on the tanks, but it requires an app.  I am also a heavy user of Home Assistant (more on that later) and found that there is a component in ESPHome that supports the Mopeka sensors, and decided to make a display that would be multi-functional.

### Functional Purpose:
This device serves a number of potential purposes:
1) When you wish to monitor your propane tank levels without an app and without Home Assistat integration, you can mount this in your kitchen\monitor panel to keep an eye on tank levels visually.
2) If you are using Home Assisant, you can integrate the sensor into Home Assistant using the ESPHome integration, or if you have Discovery enabled in Home Assistant, HA will identify it for you to configure.
3) In the case where you are using Home Assistant and are unable to place the device in the cabin of your RV, this device can be mounted in a storage area closer to the tank sensors, and used as a way to relay information to HA, without the display as the primary interface.  In this case, you can use the screensaver option to turn off the screen when not specifically in use.

### Features:
1) Connects to Mopeka and Lippert LP sensors to give you color coded view of your tank levels.
2) WiFi NOT required for display use (as long as the display can ready the bluetooth messages from the sensors)
3) Can act as a source of information for an instance of Home Assistant in addition to working as a display (WiFi is required for this)

### Requirements
This is written for a very specific display, due to compact size and hardware specs.  It will not work with other devices in its current configuration, but could in theory work as a reference if you would like to do something similar with another display

1) LILYgo T-DISPLAY-S3 - https://www.amazon.com/gp/product/B0B7X5RVTH/
2) ESPHome - Visit https://esphome.io/guides/installing_esphome.html for instructions on how to install the command line version.  I have not tried this with the Home Assistane add-on, nor with the ESPHome dashboard.  One installed, you will build the files from the command prompt:  https://esphome.io/guides/cli.html
3) Maximum of two Mopeka Pro tank sensors or Lippert LP Sensors.
4) Smart phone for initial information gathering and configuration
5) Official Mopeka app, available for IOS or Android

### Prerequisites and assumptions
1) You have installed the Mopeka app on your mobile device, and configured it to work with your sensors - this will save you a tremendous amount of time setting up your display!

### Special Thanks
I just wanted to thank the folks who helped with this project, particularly ssieb on Discord!
