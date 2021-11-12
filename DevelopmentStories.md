# Development Stories

## 0. Experimention : How to detect the opening a camera shutter

### Description

The aim of this story is to choose the right components and the right electronic schema in order to be able to detect the opening of a camera shutter, i.e how to detect a light source with a light sensor

### Acceptance criteria

The choice of the components and schema allow to detect a light source with a light sensor

### Realisation

With the following schema, it would be possible to check different values of resistor, and measure
* The voltage value induced by the phototransistor current, depending on the light illuminated it
* Which light intensity, for different resistor value, allow to swich the digital port of the Arduino

As a ligth source, we will use a standad led component, directly wired on the 5V output of the Arduino. A 220 Ohm resistor is used to get an intensity less than 20 mA.  
$$
I = U/R = \frac{(5.0 - 2.2)}{220} \approxeq 13 mA
$$
(The direct voltage of the Led is 2.2V)  

And here is the schema :
![Experimentation schema](DevelopmentSteps/Step0_Experimentation/experimentation/Experimentation_bb.png)

Be carefull to plug the anode pin (the longer leg) of the phototransistor and the led to the + side of the circuit

The following code will allow to get written on the serial of the Arduino, every second, the current analog and digital values read on the phototransistor :

````
const int ANALOG_PIN = A0;
const byte SENSOR_PIN = 2;

unsigned long loop_nb = 0;

void setup() {
    Serial.begin(9600);
    pinMode(SENSOR_PIN, INPUT);
    Serial.println("Hello world");
}

void loop() {
    int analog_value;
   
    delay(1000);

    Serial.print("Loop n° ");
    Serial.print(loop_nb++);
    Serial.print(" ");
    analog_value = analogRead(ANALOG_PIN);
    Serial.print(5.0 * analog_value / 1024.0);
    
    if ( digitalRead(SENSOR_PIN) == 0 ) {
        Serial.println(" UP_LEVEL");
    } else {
        Serial.println(" DOWN_LEVEL");
    }
}
````

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




