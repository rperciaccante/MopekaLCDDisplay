# MopekaLCDDisplay - Propane Level Display

Like may owners of RV's, I hate running out of propane - this means no heat, no hot water, and no cooking.  I picked up a set of Mopeka Propane tank sensors (https://www.amazon.com/Mopeka-Check-Sensor-Steel-Tanks/dp/B09J6MXJKT) to help keep an eye on the tanks, but it requires an app.  I am also a heavy user of Home Assistant (more on that later) and found that there is a component in ESPHome that supports the Mopeka sensors, and decided to make a display that would be multi-functional.

### Features:
1) Connects to Mopeka sensors to give you color coded view of your tank levels.
2) WiFi NOT required for display use (as long as the display can ready the bluetooth messages from the sensors)
3) Can act as a source of information for an instance of Home Assistant in addition to working as a display (WiFi is required for this)

### Requirements
1) LILYgo T-DISPLAY-S3 - https://www.amazon.com/gp/product/B0B7X5RVTH/
This is written for a very specific display, due to compact size and hardware specs.  It will not work with other devices in its current configuration!
