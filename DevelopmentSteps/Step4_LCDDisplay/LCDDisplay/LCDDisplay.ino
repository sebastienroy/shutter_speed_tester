/*
 * Shutter Speed Tester
 * https://github.com/sebastienroy/shutter_speed_tester
 * Created by Sebastien ROY
 * 2021-2022
 * 
 * Licenced under LGPL 2.1
 * 
*/

#include <LiquidCrystal_I2C.h>

// #define DEBUG

const char *version = "1.0.0";

const byte SENSOR_PIN = 2;
const byte ILLUMINATION_LED_PIN = 3;
const byte RESET_BUTTON_PIN = 4;
const byte CONTROL_LED_PIN = 5;

const byte ON = 1;
const byte OFF = 0;

const byte NOTHING = 0;
const byte OPENING = 1;
const byte CLOSING = 2; 
byte event_type = 0;

const byte READY_STATE = 0;
const byte SHUTTER_OPEN_STATE = 1;
const byte DISPLAY_STATE = 2;
byte current_state = READY_STATE;

unsigned long begin_time = 0;
unsigned long end_time = 0;

LiquidCrystal_I2C lcd(0x3f,16,2);  // set the LCD address to 0x3f for a 16 chars and 2 lines display
                                   // the I2C address value has to be determined using an I2C scanner

void setup() {
    Serial.begin(9600);
    pinMode(SENSOR_PIN, INPUT);
    pinMode(ILLUMINATION_LED_PIN, OUTPUT);
    pinMode(RESET_BUTTON_PIN, INPUT);
    pinMode(CONTROL_LED_PIN, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(SENSOR_PIN), shutter_cb,  CHANGE);
    Serial.println("Shutter speed tester");
    Serial.print("Version ");
    Serial.println(version);

    // Init LCD
    lcd.init();                      // initialize the lcd 
    lcd.backlight();
    lcd.noCursor();
    lcdDisplayReady();
    
    // Light ON
    digitalWrite(ILLUMINATION_LED_PIN, ON);
    digitalWrite(CONTROL_LED_PIN, OFF);
    Serial.println("Ready to start measure");
    delay(200);
    event_type = NOTHING; // Clear the events induced by the light switch
}

void loop() {
    if(current_state == READY_STATE) {
      if(event_type == OPENING || digitalRead(SENSOR_PIN) == ON) {
        // Entering the Shutter Open State
        // digitalWrite(CONTROL_LED_PIN, ON); // light on the control led
        analogWrite(CONTROL_LED_PIN, 16);
        event_type = NOTHING; // Ok, taken into account
        current_state = SHUTTER_OPEN_STATE;
#if defined DEBUG        
        Serial.println("Entering SHUTTER OPEN State");
#endif // defined DEBUG        
      } else if(event_type == CLOSING) { // maybe to fast to first open
        event_type = NOTHING; // Ok, taken into account
        // Entering Display State
        enterDisplayState();
        current_state = DISPLAY_STATE;    
#if defined DEBUG        
        Serial.println("Entered closing while waiting");    
#endif // defined DEBUG        
      }
    } else if(current_state == SHUTTER_OPEN_STATE) {
      if(event_type == CLOSING) {
        event_type = NOTHING; // Ok, taken into account
        digitalWrite(CONTROL_LED_PIN, OFF); // switch off the control LED
        // Entering Display State
        enterDisplayState();
        current_state = DISPLAY_STATE;
      }
    } else if(current_state == DISPLAY_STATE) {
        byte reset_pin = digitalRead(RESET_BUTTON_PIN);
        if(reset_pin == 1) {
          // Entering Ready State
          // Light ON
          digitalWrite(ILLUMINATION_LED_PIN,ON);
          delay(200);
          event_type = NOTHING; // Clear the events induced by the light switch
          lcdDisplayReady();
          Serial.println("Ready to start measure");

          current_state = READY_STATE;
        }  
        if (event_type == CLOSING) {
#if defined DEBUG        
           Serial.println("Closing while in display");
#endif // defined DEBUG        
        }
    }

    delay(100);
}

void lcdDisplayReady() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Ready to");
  lcd.setCursor(2,1);
  lcd.print("start measure");
}

void lcdDisplayMeasure(long microsDuration) {
  float time_mili = microsDuration / 1000.0;
  float speed_val = 1000.0 / time_mili;
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("time=");
  lcd.print(String(time_mili));
  lcd.print("ms");
  lcd.setCursor(0,1);
  lcd.print("speed=1/");
  lcd.print(String(speed_val));
}

void enterDisplayState() {
    // Display result
    unsigned long duration = end_time - begin_time;
    lcdDisplayMeasure(duration);
    
    float time_mili = duration / 1000.0;
    float speed_val = 1000.0 / time_mili;
    Serial.print("Opening duration (ms) : ");
    Serial.print(time_mili);
    Serial.print(" Speed : 1/");
    Serial.print(speed_val);
    Serial.println();
    // Switch off the illumination led
    digitalWrite(ILLUMINATION_LED_PIN, OFF);
  
}

void shutter_cb() {
  unsigned long current_time = micros();
  event_type = ( digitalRead(SENSOR_PIN) == OFF )? CLOSING : OPENING;
  if(event_type == OPENING) {
    begin_time = current_time;
#if defined DEBUG        
    Serial.println("Open");
#endif // defined DEBUG        
  } else {
    end_time = current_time;
#if defined DEBUG        
    Serial.println("Close");
#endif // defined DEBUG        
  }
}
