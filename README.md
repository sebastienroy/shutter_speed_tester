# shutter_speed_tester

The shutter speed tester is a project which goal is to design and build a tool that allows to test the shutter speed accuracy of a film camera



When people passionated with old film cameras want to use their camera to shoot film, this sometimes results in an over or an under exposed film.  
This is usually due to the speed of the camera shutter that is not any more accurate. In order to check the shutter speed accuracy, the camera owner has to compare the actual opening time of the shutter with the expected one.  
This is the purpose of the shutter speed tester : measure the accuracy of shutter speed. 

Here is a presentation video (in French) :  

[![Presentation video in french](images/sst.jpg)](https://youtu.be/lsWC2Jt2cCw)

The result of this open source project is to allow anyone who has the minimum skills in DIY domain to build his own device

[Here is the description of the open source project.](project_description.md)

## Accuracy of the open source tester

The resulting tester has been tested against two methods described in [shutter meta tester project](https://github.com/sebastienroy/shutter_meta_tester) : time slot method and rotating wheel method.  
With the time slot method (an LED lit during a given time duration), the difference between expected and measured value is about a few tens of microseconds. This error is due mainly to the latency of the phototransistor. This error is small enough to not to be taken into account even at speed up to 1/2000s.  
With the rotating wheel method, we can observe an error a lot bigger.This error is not due to electronic factors, but results from geometric facts:  
The sensor of the tester is a bulb of 3mm diameter.  
The slit width of the curtain shutters is about 3mm large for most common shutter.  
When trying to measure a 3mm object with a 3mm sensor, the resulting error is about 100%.  
**So, because of geometric consideration, the use of such a tester should be reserved for speeds not exceeding 1/250. The conclusion is the same for all tester with a similar sensor that do not provide a calibration mechanism.** 

# Baby Shutter Tester
Many people, interested to get such a device but who don't feel skilled enough to build their own copy, asked the author of the project to build it for them.  
This resulted to the commercial version of the tool, the Baby Shutter Tester.  
The Baby Shutter Tester principles are the same as the open source version ones. However, its design has been reworked in order to be smaller and easier to produce in small series.  

![Baby Shutter Tester image](baby_shutter_tester/images/BabyShutterTester.jpg)

## Video presentation
[![Presentation YouTube](baby_shutter_tester/images/YoutTubeVideo.jpg)](https://youtu.be/0uQaNf9IJO4)

## Accuracy
The accuracy of the Baby Shutter Tester is checked using [a dedicated benchmark](https://github.com/sebastienroy/shutter_meta_tester).  
The tests show the the tool can be used hand held with a good accuracy at speeds up to 1/250th of a second.  
For speed equal or higher than 1/500, the best precision is achieved using a procedure detailed [in the documentation](baby_shutter_tester/BabyShutterTesterUserManual.md) and [in this video](https://youtu.be/vWWtHFmMRck).  

## Where to buy 
[eBay link](https://www.ebay.fr/itm/203877867266)

## User manual

[User Manual](https://github.com/sebastienroy/shutter_speed_tester/wiki/Shutter-Testers-documentation)

# Just released : The Shutter Lover

The Shutter Lover is a tool specialized in the measurement of the travel time of the curtains of focal plane shutters.  
The measurement of the curtain travel time is necessary for camera repairers, in order to be able to ajust the springs of each of the curtains.  
The goal is to obtain an homogeneous travel time of the two curtains, with values in accordance with the manufacturer recommendations.  
This product is available for [purchase on ebay](https://www.ebay.fr/itm/204344103169).  

Here is a short teaser :  
[![Video of the Shutter Lover](shutter_lover/images/ShutterLoverVideoImage.jpg)](https://youtu.be/AOC1KYjHUho)

## User Manual  

[User Manual](https://github.com/sebastienroy/shutter_speed_tester/wiki/Shutter-Testers-documentation)

