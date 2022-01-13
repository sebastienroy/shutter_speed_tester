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
    float voltage;
   
    delay(1000);
    analog_value = analogRead(ANALOG_PIN);
    voltage = 5.0 * analog_value / 1024.0;
    const char * digital_level = ( digitalRead(SENSOR_PIN) == 0 )? " UP_LEVEL" : " DOWN_LEVEL";

    Serial.print("Loop n° ");
    Serial.print(loop_nb++);
    Serial.print(" ");
    Serial.print(voltage);
    Serial.println(digital_level);
}
