#define UP_EVENT 1
#define DOWN_EVENT 2

const byte sensor_pin = 3;

volatile byte event = 0;
volatile unsigned long previous_time = 0;
volatile unsigned long current_time = 0;
unsigned long time_interval = 0;

void setup() {
    Serial.begin(9600);
    pinMode(sensor_pin, INPUT);
    attachInterrupt(digitalPinToInterrupt(3), callback, CHANGE);
}

void loop() {
    delay(100);

    if ( event != 0 ) {
        if ( event == UP_EVENT ) {
            Serial.println("Something");
        } else {
            Serial.println("Nothing");
        }
    event = 0;
    time_interval = (current_time - previous_time);
    Serial.println(time_interval);
    }
}

void callback() {
    previous_time = current_time;
    current_time = micros();
    if ( digitalRead(sensor_pin) == 0 ) {
        event = UP_EVENT;
    } else {
        event = DOWN_EVENT;
    }
}
