#define UP_EVENT 1
#define DOWN_EVENT 2
const int ANALOG_PIN = A0;

const byte sensor_pin = 3;

volatile byte event = 0;
volatile unsigned long previous_time = 0;
volatile unsigned long current_time = 0;
unsigned long time_interval = 0;

unsigned long loop_nb = 0;

void setup() {
    Serial.begin(9600);
    pinMode(sensor_pin, INPUT);
    attachInterrupt(digitalPinToInterrupt(3), callback, CHANGE);
    Serial.println("Hello world");
}

void loop() {
    int analog_value;
  
    
    delay(1000);

    Serial.print("Loop n° ");
    Serial.print(loop_nb++);
    Serial.print(" ");
    analog_value = analogRead(ANALOG_PIN);
    Serial.print(5.0*analog_value/1024.0);
    
    if ( digitalRead(sensor_pin) == 0 ) {
        Serial.println(" UP_LEVEL");
    } else {
        Serial.println(" DOWN_LEVEL");
    }

    /* if ( event != 0 ) {
        if ( event == UP_EVENT ) {
            Serial.println("Something");
        } else {
            Serial.println("Nothing");
        }
    event = 0;
    time_interval = (current_time - previous_time);
    Serial.print("Time interval :");
    Serial.println(time_interval); 
    }*/
}

void callback() {
    // Serial.println("Pif");
    previous_time = current_time;
    current_time = micros();
    if ( digitalRead(sensor_pin) == 0 ) {
        event = UP_EVENT;
    } else {
        event = DOWN_EVENT;
    }
}
