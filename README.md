# shutter_speed_tester

A project that goal is to design and build a tool that allows to test the shutter speed accuracy of a film camera

## Introduction

When people passionated of old film cameras want to use their camera to shoot film, this sometimes result in an over or an under exposed film.  
This is usualy due to the speed of the camera shutter that is not any more accurate. In order to check the shutter speed accuracy, the camera owner have to compare the actual opening time of the shutter with the expected one.  
This is the purpose of the shutter speed tester : measure the accuracy of shutter speed. 

## Principle

![Shutter speed tester principle schema](./design/images/principle.svg)

## Usage

1. Put the enlighting light in front of the camera
2. Put the light sensor at the open back of the camera
3. Switch the device on
4. Press the camera shutter button
5. Read the measured camera speed (displayed as a time (t) and as a speed (1/t)), and compare it to the setting of the camera (1/60, 1/125, etc)
6. To perform the measure again, maybe with another camera setting, press the Reset button on the device, and go to 4.

## State Diagram

![State diagram](design/images/states.svg)

## Project scope

The project scope is to describe how to build a shutter speed tester tool.
The outputs of the project are :
- design documents, including the design process itself
- build description

## Design & development tools

The design & development tools are the following
| Tool name      | Version  | Purpose     | link                            |
| -------------- | -- | ----------- | ------------------------------- |
| Fritzing      | 0.9.3 | Electronic component & circuit design       | https://fritzing.org/ |
| Arduino IDE   | 1.8.16 |Arduino cross development IDE    | https://www.arduino.cc/en/software |
| VSCode | 1.62.0 | General purpose code editor | https://code.visualstudio.com/ |

## Physical architecture

The shutter speed tester is composed of the following elements 
- The main unit, composed of
  - a power switch
  - a microcontroler device (Arduino) that computes the results and integrates all the elements
  - a display lcd
  - a control led
  - a reset button
  - a power element (battery)
  - the casing of the main unit
- The enlighting element, used to enlight the lens or directly the front side of the camera shutter
  - an enlighting led
- The light sensor
  - a light sensor that detects the light at the rear side of the camera shutter
  - the adapter to the camera's back
- Wiring
  - between the main unit and the enlighting element
  - between the main unit and the sensor element

## Software code

The microcontroler has to be programmated in order to make the link between the sensor and the display, and the interface buttons

