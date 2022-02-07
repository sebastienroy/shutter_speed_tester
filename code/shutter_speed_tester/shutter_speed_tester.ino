/*
 * Shutter Speed Tester
 * https://github.com/sebastienroy/shutter_speed_tester
 * Created by Sebastien ROY
 * 2021-2022
 * 
 * @license GPL-3.0+ <http://spdx.org/licenses/GPL-3.0+>
 * 
*/

#include <LiquidCrystal_I2C.h> // LiquidCrystal I2C by Frank de Brabander
#include <EEPROM.h>
#include <Wire.h>
#include <util/atomic.h> // this library includes the ATOMIC_BLOCK macro.

//#define DEBUG
//#define PERF_DEBUG

const char *version = "1.0.0";

const byte SENSOR_PIN = 2;
const byte ILLUMINATION_LED_PIN = 3;
const byte RESET_BUTTON_PIN = 4;
const byte CONTROL_LED_PIN = 5;

const byte ON = 1;
const byte OFF = 0;

// These variables are manipulated by the interrupt callback used to read the value
const byte NOTHING = 0;
const byte OPENING = 1;
const byte CLOSING = 2; 
volatile byte event_type = 0;
volatile bool measure_is_open = false;
volatile unsigned long  duration = 0;

const byte READY_STATE = 0;
const byte SHUTTER_OPEN_STATE = 1;
const byte DISPLAY_STATE = 2;
byte current_state = READY_STATE;

// control LED lev (over 255)
const int control_led_level = 255;

// EEPROM memory address that contains i2c address value
const int EEPROM_I2C = 0;

// Because the liquid_crystal_i2c library can only be inscated with the address value, 
//   and this value cannot be changed afterward, we will instanciate it later
LiquidCrystal_I2C *lcd = NULL;

void setup() {
    Serial.begin(9600);

    setup_i2c_address();
    if(lcd != NULL) {
        // Init LCD
        lcd->init();                      // initialize the lcd 
        lcd->backlight();
        lcd->noCursor();
        lcdDisplayReady();     
    }   
    
    pinMode(SENSOR_PIN, INPUT);
    pinMode(ILLUMINATION_LED_PIN, OUTPUT);
    pinMode(RESET_BUTTON_PIN, INPUT);
    pinMode(CONTROL_LED_PIN, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(SENSOR_PIN), shutter_cb,  CHANGE);
    Serial.println("Shutter speed tester");
    Serial.print("Version ");
    Serial.println(version);
    
    // Light ON
    digitalWrite(ILLUMINATION_LED_PIN, ON);
    digitalWrite(CONTROL_LED_PIN, OFF);
    #if defined DEBUG
    Serial.println("Ready to start measure");
    #endif
    delay(200);
    event_type = NOTHING; // Clear the events induced by the light switch
    measure_is_open = true;
}

void setup_i2c_address() {
    byte address = 0;
    EEPROM.get(EEPROM_I2C, address);
    #if defined DEBUG
    Serial.print("Initial I2C address is : ");
    Serial.println(address, HEX);
    #endif

    byte error;
    Wire.begin();
    Wire.beginTransmission(address);
    error = Wire.endTransmission();
    if(error == 0) {
      #if defined DEBUG
      Serial.println("Device found at this address, cool!");
      #endif
    } else {    // find the address of the lcd
        #if defined DEBUG
        Serial.println("No device found at this address, sorry!");
        Serial.println("Searching another address...");
        #endif
        bool found = false; 
        for(address = 1; (address < 127) && !found ; address++ ) {
            Wire.beginTransmission(address);
            error = Wire.endTransmission();
            if (error == 0) { // lcd found !
                found = true;
                #if defined DEBUG
                Serial.print("I2C device found at address 0x");
                Serial.println(address, HEX);
                #endif
                // save it
                EEPROM[EEPROM_I2C] = address;
                #if defined DEBUG
                Serial.println("Saved in EEPROM");
                #endif
            }
       }  
       if(!found) {
            #if defined DEBUG
            Serial.println("Sorry, no I2C device found.");      
            #endif
       }
    }
    if(error == 0) { // the i2c device has been found, address variable is ok
        Serial.println("Initializing LCD...");
        lcd = new LiquidCrystal_I2C(address,16,2);
    }
}

void loop() {  
    if(current_state == READY_STATE) {
      if(event_type == OPENING || digitalRead(SENSOR_PIN) == ON) {
        // Entering the Shutter Open State
        // digitalWrite(CONTROL_LED_PIN, ON); // light on the control led
        analogWrite(CONTROL_LED_PIN, control_led_level);
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
          measure_is_open = true;
        }  
        if (event_type == CLOSING) {
#if defined DEBUG        
           Serial.println("Closing while in display");
#endif // defined DEBUG        
        }
    }
    delay(10);
}

void lcdDisplayReady() {
  if(lcd != NULL) {
    lcd->clear();
    lcd->setCursor(0,0);
    lcd->print("Ready to");
    lcd->setCursor(2,1);
    lcd->print("start measure");
  }
}

void lcdDisplayMeasure(long microsDuration) {
  float time_mili = microsDuration / 1000.0;
  float speed_val = 1000.0 / time_mili;
  if(lcd != NULL) {
    lcd->clear();
    lcd->setCursor(0,0);
    lcd->print("time=");
    lcd->print(String(time_mili));
    lcd->print("ms");
    lcd->setCursor(0,1);
    lcd->print("speed=1/");
    lcd->print(String(speed_val));
  }
}

void enterDisplayState() {
    // Display result
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

/*
 * Callback to measure the time where the shutter is open
 * The tricky thing is to prevent bouncing
 */
void shutter_cb() {
  static byte previous_state = OFF;
  static  unsigned long begin_time = 0;
  static unsigned long end_time = 0;
 if( measure_is_open) {
  #if defined PERF_DEBUG
  unsigned long t1 = micros();
  #endif
    
    ATOMIC_BLOCK(ATOMIC_RESTORESTATE) {
      byte current_state = digitalRead(SENSOR_PIN);
      if(current_state != previous_state) {
        if((current_state == ON) && (begin_time == 0) ) { // alow start measure only once
          begin_time = micros();        
          event_type = OPENING;
    #if defined DEBUG        
        Serial.print("Open - ");
        Serial.println(measure_is_open);
    #endif // defined DEBUG        
        } else if((current_state == OFF) && (begin_time !=0) ){ // current_state==OFF but prevent close before open
          end_time = micros();  
          duration = end_time - begin_time;
          // reset measurement
          begin_time = end_time = 0;       
          event_type = CLOSING;
    #if defined DEBUG        
        Serial.print("Close - ");
        Serial.println(measure_is_open);
    #endif // defined DEBUG        
          measure_is_open = false;
        }
        previous_state = current_state;     
      }
    } // ATOMIC_BLOC
  #if defined PERF_DEBUG
  unsigned long t2 = micros();
  Serial.print("callback duration (micros) : ");
  Serial.println(t2-t1);
  #endif
  } // measure_is_open
}
