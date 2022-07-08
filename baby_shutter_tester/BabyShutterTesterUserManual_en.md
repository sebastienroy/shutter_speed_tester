# Baby Shutter Tester – User Manual  

The Baby Shutter Tester is a device designed to check the accuracy of the shutter speed of film cameras.
This device has been designed and manufactured in France. Its assembly is made according to an artisanal process. The case is printed individually on a 3D printer with a bio sourced raw material produced in Europe.  
Its design comes from the Shutter Speed Tester open source project (https://github.com/sebastienroy/shutter_speed_tester). It uses the same principles, but its components and its manufacture process have been optimized to allow a smaller format.  
# Commissioning
The Baby shutter tester is made of a main box and a sensor, connected together by a wire.  

The main box includes
- An on/off switch
- A reset and mode selection button
- A display screen
- A lighting LED (on the right side)
- A micro-USB port (on the left side)
- An LR03/AAA battery compartment (at the back)


The sensor includes  
- A phototransistor
- A support in 35 mm format (135 film format)
- A removable 6x6 medium format adapter (120 film format)  

The device can be powered either by a micro USB cable or by two LR03 (AAA) batteries. These are put in place at the back of the device, by opening the plastic door that covers their housing.  

It is necessary to remove the batteries  
- When not using the device for a long time
- When you power the device using the USB port  

# Conditions of use and storage  

The Baby Shutter Tester should be kept away from moisture and heat sources.  
It is designed to operate over a temperature range of 5 to 40°C.  

# Operating mode  

Open the back of your camera.  
Place the sensor on the back of the camera, in place of the film. With medium format cameras, use the supplied adapter. Be sure to center the sensor, and hold it with a rubber band or other device.  
Place the case in front of your camera, raising it if necessary, so that the illumination LED of the device is in front of the sensor. The Baby Shutter Tester LED has an illumination cone of 20°. It is necessary that the sensor is located in this lighting cone.  
- Turn on the baby Shutter Tester. The box displays "Ready" and the lighting LED is on
- To be sure that the Baby Shutter Tester box and its sensor are correctly positioned, use the Test mode (see next chapter)
- Select the speed you want to measure on your camera
- Trigger your camera's shutter. During the shutter opening phase, the Baby Shutter Tester displays a sun picture in order to indicate that it detects light. This phase can be very brief, depending on the speed chosen on the camera. Once the shutter is closed, the measured speed value is displayed on the screen
- Compare the measured value with the value chosen on the speed selector of your camera
- To perform a new measurement, press the reset button.  

The Baby Shutter Tester can perform measurements ranging from several seconds to 1/4000th of a second with a reliability better than 1/10th stop.  

# Test Mode  

When the Baby Shutter Tester displays "Ready", a long press (more than two seconds) on the reset button will enter into Test mode. In this mode, the device does not measure, but keeps the illumination LED on and displays a sun picture when the sensor detects light.  
This mode allows you to correctly position the sensor at the back of the camera, and the LED of the case opposite and at the right height in relation to it. For example, use books of the right thickness to raise the Baby Shutter Tester securely and at the desired height.  
When you consider you have positioned everything correctly, select a slow shutter speed or pause B on your camera and shoot. If a sun appears on the tester, the assembly is correctly positioned.  
Once the positioning is done, a short press on the reset button will return into the measurement mode.  
A long press from Test mode displays information about your device.  

# Specificity of measurement according to the type of shutter.  

There are mainly two types of shutters:  
- Leaf shutters
- Focal plane shutters (curtain shutters)  

The Shutter Speed Tester gives an indication of shutter speed on an all-or-nothing mode, measured at the sensor location. This very simple operation is sufficient to cover the majority of metering needs, for which exposure is the product of shutter speed and aperture.  
However, there are some cases where this simple value is not sufficient to determine the exposure.  

## Leaf shutter  

The leaf shutter has the characteristic of operating in three phases: opening, full opening, and closing.  
When the full open is long compared to the open and close phases, everything is fine. This is the expected behaviour of the shutter.  
When this is no longer the case (if the leafs motion is getting slower, and also for very high speeds, in practice only for the fastest shutter speed), you may have a discrepancy between the aperture time measured at the center of the lens and the effective film exposure.  
However, there is a way to estimate the phenomenon: If you place the sensor as close as possible to the shutter (lens side, therefore), you can make measurements in the center and measurements on the periphery. The measured value difference will give you the shutter opening and closing speed  

## Focal plane shutter  

The focal plane shutter uses two curtains which move successively, in the same direction. The opening of the first is followed by the closing of the second. If the two curtains move at the same speed over the entire surface, the exposure is uniform and is given by the measurement of the Shutter Speed Tester.  
If the two curtains move at different speeds, this gives exposure differences depending on the parts of the photo. To detect such a phenomenon, position the sensor at different positions on the back of the camera to make your measurements and check that the measurement values are identical regardless of the location of the sensor.  

# Measurement accuracy

Like any measuring instrument, the results of the Baby Shutter Tester are subject to some uncertainty. It is essential for the operator be aware of the limitations of the instrument and its conditions of use.  
The Baby Shutter Tester's measurement uncertainty comes mainly from the electronic behavior of the phototransistor used to determine whether the shutter is open or closed. A bit like a gauge, which takes time to detect the arrival or exit of water in a tank, a phototransistor takes a little time to “fill” and “empty”. The switching times (opening / closing) depend in particular on the intensity of the light received. By analogy, a gauge will not take the same time to detect the presence of water depending on whether the water inlet flow is high or low.  

**When the sensor is placed in front of its LED, at a distance between 3 and 6 cm, with indoor ambient light, the measurement uncertainty** (the difference between the physical phenomenon and its measurement) **is less than 25 microsecond**s. This difference is evaluated using a dedicated measuring bench, and is checked after the device is manufactured.  

When the above conditions are met, it is therefore possible to take measurements of speeds up to the 4000th of a second with an accuracy of 1/10th stop.

# Contact
For any additional information or questions you may have about the Baby Shutter Tester, you can refer to the following web address:  
https://github.com/sebastienroy/shutter_speed_tester  
mailto:photographyelectronics@gmail.com
