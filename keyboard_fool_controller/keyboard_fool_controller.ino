#include <Arduino.h>
#include "Keyboard.h"
#define SERIAL Serial

const int inputPin = 3;
bool currentState = HIGH;
bool beforeState = HIGH;

void setup() {
  SERIAL.begin(115200);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  int pinNum[11] = {3, 4, 5, 6, 7, 8, 9, 10, 14, 15, 16};
  unsigned char s[11] = {0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 0x69, 0x70, 0x71};

  for(int i; i<11; i++){
    if ( digitalRead(pinNum[i]) == 0){
        //digitalWrite(ledPin, HIGH);
        SerialUSB.println("Push!");
        Keyboard.press( s[i] );
    } else {
        //digitalWrite(ledPin, LOW);
        SerialUSB.println("Release!");
        Keyboard.release( s[i] );
    }
  }
  delay(500);
}