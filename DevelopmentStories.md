# Development Stories

## 1. Detection of the time interval between rising and falling edges of the shutter

### Description 

The goal of this step is to do the minimum of design and development to be able to compute the time interval between rising and falling edges of the shutter.  
This step can be considered as a kind of derisking.

### Test means

The source of light may be provided by an external device 
The result output may be written (and read) on the serial port of the Arduino

### acceptance criteria
The system detects the rising and falling edges of the shutter
The system computes the time differences between


### Bibliography

A similar problem has been adressed in this page :
https://lederniermatou.net/arduino-et-phototransistor.html

### Realisation

The following circuit has been realized, using the indications found in the referenced bibliography :  

![Schema](DevelopmentSteps/Step1_EdgesDetection/EdgesDetection_schema.png)  

![Bread board](DevelopmentSteps/Step1_EdgesDetection/EdgesDetection_bb.png)

### Code




