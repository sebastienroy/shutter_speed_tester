# Baby Shutter Tester – User Manual  

_Version 1.1.0_  

The Baby Shutter Tester is a device designed to check the accuracy of the shutter speed of film cameras.
This device has been designed and manufactured in France. Its assembly is made according to an artisanal process. The case is printed individually on a 3D printer with a bio sourced raw material produced in Europe.  
Its design comes from the Shutter Speed Tester open source project (https://github.com/sebastienroy/shutter_speed_tester). It uses the same principles, but its components and its manufacture process have been optimized to allow a smaller format.  
# Commissioning
The Baby shutter tester is made of a main box and a sensor.  

The main box includes
- An on/off switch
- A reset and mode selection button
- A display screen
- A lighting LED (on the right side)
- A micro-USB port (on the left side)
- An LR03/AAA battery compartment (at the back)


The sensor is made of  
- A phototransistor located on a 35 mm format support (135 film format)
- A removable 6x6 medium format adapter (120 film format)  

The device can be powered either by a micro USB cable or by two LR03 (AAA) batteries. These are put in place at the back of the device, by opening the rear door.  

It is necessary to remove the batteries  
- When not using the device for a long time
- When you power the device using the USB port  

# Conditions of use and storage  

The Baby Shutter Tester must be kept away from moisture and heat sources.  
It is designed to operate over a temperature range of 5 to 40°C.  

# Measurement operation  

- Open the back of your camera.  
- Place the sensor on the back of the camera, in place of the film. With medium format cameras, use the supplied adapter. Be sure to center the sensor, and hold it with a rubber band or other device.  
- Place the case in front of your camera, raising it if necessary, so that the illumination LED of the device is in front of the sensor. The Baby Shutter Tester LED has an illumination cone of 20°. It is necessary that the sensor is located in this lighting cone.  
- Turn on the baby Shutter Tester. The box displays "Ready" and the lighting LED is on
- To be sure that the Baby Shutter Tester box and its sensor are correctly positioned, use the Test mode (see next chapter)
- Select the speed you want to measure on your camera
- Trigger your camera's shutter. During the shutter opening phase, the Baby Shutter Tester displays a sun picture in order to indicate that it detects light. This phase can be very brief, depending on the speed chosen on the camera.  
- Once the shutter is closed, the measured speed value is displayed on the screen
- Compare the measured value with the value chosen on the speed selector of your camera
- To perform a new measurement, press the reset button.  

The Baby Shutter Tester can perform measurements ranging from several seconds to 1/4000th of a second with a reliability better than 1/10th stop. For an even higher precision use the autocalibration function (see next chapter)

# The different operating modes  

The initial operating mode of the Baby Shutter Tester is the "Measurement" mode, with which speed measurements are carried out.  
But the device also has other operating modes, that can be used  to facilitate positioning, to display information or to carry out the self-calibration of the device. A long or short press on the device button allows you to navigate from one mode to another.  

![Modes de fonctionnement](Statediagram.svg)  
Figure 1: Operating modes and transitions from one mode to another  

## Measurement mode
This mode allows you to measure the speed of your camera.  
When the measurement is carried out under nominal conditions (lens removed, sensor perpendicular to the lighting LED, distance LED - sensor between 3 and 6 cm), the factory setting allows a measurement accuracy of about 25 microseconds (1/10 of stop at speed of 1/4000 of a second).  
If the measurement conditions deviate from the nominal conditions, and for even higher accuracy, use the device's autocalibration capability (see below).

## Test mode
In this mode, the device does not perform measurements, but keeps the illumination LED on and displays a sun picture when the sensor detects light.  
This mode allows you to correctly set the sensor at the back of the camera, and the LED at the opposite and at the right height.  
When you think you have positioned everything correctly, select a slow shutter speed or pause B on your camera and release shutter. If a sun picture appears on the tester, the device and sensor are correctly positioned.  

## Information mode

In this mode, the screen displays information about the device, including its firmware version number.

## Autocalibration mode

Phototransistors, such as the one used by the Baby Shutter Tester, do not have instantaneous light detection time. They have a reaction time which depends on various factors and in particular on the quantity of light which hits them. This reaction time does not have the same value when opening and when closing. The Baby Shutter Tester is factory calibrated to compensate these different reaction times for the following conditions:  
- Distance LED - sensor between 3 and 6 cm
- Sensor perpendicular to the LED
- No lens mounted on the camera.  

When these conditions cannot be met, and also to obtain greater precision than the factory calibration, you can use the device's autocalibration capability. This capability allows the device to determine a calibration value for your particular measurement conditions.  

- Firmly position your camera, body and sensor of the Baby Shutter Tester, so that they do not move from one measurement to the next.  
- Select a slow speed on your camera (1/30s-  or slower)
Select the autocalibration mode, the device displays "Calibrate" and its LED is on
- Trigger the shutter release
- If the calibration is sucessfully performed (shutter speed slow enough, and moderate attenuation of the light beam), the tester briefly displays "Autocalib. succeded" as well as the calculated calibration value. This value is commonly negative but can also take values ​​greater than 0 when the attenuation of the light beam is high.  
  - After this brief display, the device is positioned in  measurement mode, with the words "Auto cal" on the display screen
  - Then perform your speed measurements under the same conditions as your calibration. The calibration value will be used in the displayed result
  - The calibration value is kept until you turn off your device
- If the calibration cannot be succesfully performed (shutter speed too fast, too much attenuation of the light beam), the device displays "Autocalibr. failed" and allows you to restart the calibration.

# Specificity of the measurement according to the type of shutter.  

There are mainly two types of shutters:  
- Leaf shutters
- Focal plane shutters (curtain shutters)  

The Shutter Speed Tester gives an indication of shutter speed on an all-or-nothing mode, measured at the sensor location. This very simple operation is sufficient to cover the majority of metering needs, for which exposure is the product of shutter speed and aperture.  
However, there are some cases where this simple value is not sufficient to determine the exposure.  

## Leaf shutter  

The central shutter has the characteristic of operating in three phases: opening, full opening, and closing.  
When the full aperture lasts a long time compared to the opening and closing phases, everything is fine, the speed measured corresponds to the exposure that the film will have.
When this is no longer the case (for very high speeds, but also if the speed of the shutter leaves is too slow), you may have a discrepancy between the measured speed and the actual exposure you will get. The film, since the intermediate phase during which the shutter is neither completely open nor completely closed is important.  
However, there is a way to estimate the phenomenon: If you place the sensor closest to the shutter (lens side, therefore), you can make measurements in the center and measurements on the periphery. The measured time difference will give you the time taken by the leaves to open and close.  

## Focal plane shutter  

The focal plane shutter uses two curtains which move successively, in the same direction. The opening of the first is followed by the closing of the second. If the two curtains move at the same speed over the entire surface, the exposure is uniform and is given by the measurement of the Shutter Speed Tester.  
If the two curtains move at different speeds, this gives exposure differences depending on the parts of the photo. To detect such a phenomenon, position the sensor at different positions on the back of the camera to make your measurements and check that the measurement values are identical regardless of the location of the sensor.  

# Contact
For any additional information or questions you may have about the Baby Shutter Tester, you can refer to the following links:  
https://github.com/sebastienroy/shutter_speed_tester  
mailto:photographyelectronics@gmail.com
