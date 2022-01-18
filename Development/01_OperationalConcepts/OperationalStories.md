# Operational Analysis

The operational analysis has to give an answer to the following points :  
- Who is the target audience ?
- What need will be statisfied by the project product ? (Conops)
- How the product will satisfied by the need ? (Conuse)
- What are the product expected advantages compared to existing products ?

## Target audience

The target audience is
* Film camera hobists
* Film camera repairers

## Operational concepts

### Camera hobist
A camera owner wants to use his camera to shoot film. Before loading the film into the camera, he checks the accuracy of the shutter speed using the shutter speed tester.  
So, if the speed is accurate, he is able to shoot in confidence to have the film correctly exposed.  
If the actual shutter speed is different than the speed selector indication, he is able to compensate the speed difference using either the aperture selector or the speed selector.  

### Camera repairer
As a professional or hobist, the camera reperair has to measure the shutteer speed of the camera at different speed selector positions. He uses for that the shutter speed tester.  
Knowing the difference between expected and actual speed value, he is able to adjust the springs tension of the shutter and thereby make the shutter more accurate.  

## Operational Usage

1. Put the source light of the shutter speed tester in front of the camera
2. Put the light sensor at the open back of the camera
3. Switch the device on
4. Press the camera shutter button
5. Read the measured camera speed (displayed as a time (t) and as a speed (1/t)), and compare it to the setting of the camera (1/60, 1/125, etc). Convert the difference in term of stops.
6. Press the Reset button on the device, perform the measure again, at all speed selector position.
7. You'll get, for each speed selector position, the number of stops needed to compensate to speed difference between expected and actual


### State Diagram of the Shutter Speed Tester

![State diagram](../../design/images/states.svg)

### Speed measure to stop compensation 
Here is the formula to convert a given measure into a number of stops :
$$
\Delta_{stops} = log_2(\frac{S_m}{S_e})
$$
Where $S_m$ is the measured speed ans $S_e$ is the expected speed.  
### Example
If you measure a 1/60 speed, while the selector is at 1/125,  
$S_m=60$,  
$S_e=125$,  
$\to\Delta_{stops}\sim-1$  
So you must compensate the speed difference by closing the apperture of one stop compared to the theretical value.


## Expected advantages of this tool, compared to that already existing

The researches on the web of such kind of tool give different results :
- Tools very expensive, more than 100 €
- Tools very tricky to use, that need to analyse a response curve on your computer or your smartphone
- Tools that have both properties
- Tools built by makers, but not integrated at all, not usable by common camera hobist

So, there is a room for a tool that would be all integrated, easy to use, at a reasonable price tag, let say around 35€.