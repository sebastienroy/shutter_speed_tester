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
