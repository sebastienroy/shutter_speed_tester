# shutter_speed_tester

A project which goal is to design and build a tool that allows to test the shutter speed accuracy of a film camera

## Introduction

When people passionated with old film cameras want to use their camera to shoot film, this sometimes results in an over or an under exposed film.  
This is usually due to the speed of the camera shutter that is not any more accurate. In order to check the shutter speed accuracy, the camera owner has to compare the actual opening time of the shutter with the expected one.  
This is the purpose of the shutter speed tester : measure the accuracy of shutter speed. 

Here is a presentation video (in French) :  

[![Presentation video in french](images/sst.jpg)](https://youtu.be/lsWC2Jt2cCw)

## Principle

![Shutter speed tester principle schema](./design/images/principle.svg)

## Project scope

The project scope is to describe how to design and build a shutter speed tester tool.
The outputs of the project are :
- design documents, including the design process itself
- build description


## The project, step by step

Note that the following steps are not strictly waterfall. The result of a given step may introduce rework on previous steps

### [Operational concept definition](Development/01_OperationalConcepts/OperationalStories.md)
- Who is the target audience ?
- What need will be statisfied by the project product ? (Conops)
- How the product will satisfied by the need ? (Conuse)
- What are the product expected advantages compared to existing products ?

### [Preliminary design](Development/02_PreliminaryDesign/PreliminaryStories.md)
- Main behavioural description
- Definition of product architecture
- Choice of components / providers
- Choice of development/production tools

### [Development of Electronic circuit / microcontroler code / PCB design](Development/03_Development/DevelopmentStories.md)
- Definition of the target circuit with elements needed to implement the expected behaviour
- Development of the code necessary to control the electronic circuit and to implement the expected behaviour
- Design of the target PCB
- Production of PCB
- Assembly of components : soldering, connectors assembly, tests

### [Design of the casing](Development/04_Casing/CasingStories.md)
- Design of the facade : holes for display, button, LED, switch, position and size of screw plots
- Design of the body : positionning of the light source, sensor wire
- Design of the back : battery case and door
- Design of the sensor case : take into account different films and camera formats

### [Documentation](Development/05_Documentation/DocumentationStories.md)
- User Manual
- Build Manual
- BOM (Bill of Material)



