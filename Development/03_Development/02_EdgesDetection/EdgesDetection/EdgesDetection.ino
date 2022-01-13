const byte SENSOR_PIN = 2;

const byte NOTHING = 0;
const byte OPENING = 1;
const byte CLOSING = 2; 
byte event_type = 0;

unsigned long begin_time = 0;
unsigned long end_time = 0;

void setup() {
    Serial.begin(9600);
    pinMode(SENSOR_PIN, INPUT);
    attachInterrupt(digitalPinToInterrupt(SENSOR_PIN), shutter_cb,  CHANGE);
    Serial.println("Hello world");
}

void loop() {
    delay(100);

    if(event_type == CLOSING) {
      unsigned long duration = end_time - begin_time;
      float time_mili = duration / 1000.0;
      float speed_val = 1000.0 / time_mili;
      Serial.print("Opening duration (ms) : ");
      Serial.print(time_mili);
      Serial.print(" Speed : 1/");
      Serial.print(speed_val);
      Serial.println();
      
      event_type = NOTHING;
     }

}

void shutter_cb() {
  unsigned long current_time = micros();
  event_type = ( digitalRead(SENSOR_PIN) == 0 )? CLOSING : OPENING;
  if(event_type == OPENING) {
    begin_time = current_time;
  } else {
    end_time = current_time;
  }
}
