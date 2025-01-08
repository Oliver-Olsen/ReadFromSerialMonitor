#include <Arduino.h>

/*  6a. char is a character. This is not only used to represent a letter
*   but also a number like eg. 4 as a character. So it is another way to
*   represent/handle letter number or symbols.
*
*   6b. The value stored in the variable mychar, results in the letter D.
*   This is due to the letters value being changed when we handle it as an int
*   
*/

// Assigns pins
#define PIN_A 6
#define PIN_B 5
#define PIN_C 4
#define PIN_D 3
#define PIN_E 2

//Adds pins to an array in order to simplify setup
int pins[5] = {
  PIN_A, 
  PIN_B, 
  PIN_C, 
  PIN_D, 
  PIN_E
}; 


void setup() {
  Serial.begin(9600); 

  //Runs through the setup for all five LED pins
  for (int i = 0; i < 5; i++) {
    pinMode(pins[i], OUTPUT); //Defines pin type
    digitalWrite(pins[i], LOW); //Ensures the LED is off at startup
  }
}

void loop() {
  if (Serial.available() > 0) {
    char msg = Serial.read(); //If serial is available, assigns value to a char

    /*
    * A switch to check the value of the char. 
    * If the char is one of the first five letters of the alphabet, turns on the corresponding LED. 
    * If not one of the first five letters, turns off all the LEDs. 
    */
    switch (msg) 
    {
    case 'a':
      digitalWrite(PIN_A, HIGH); 
      break;

    case 'b':
      digitalWrite(PIN_B, HIGH); 
      break;
    
    case 'c':
      digitalWrite(PIN_C, HIGH); 
      break;

    case 'd':
      digitalWrite(PIN_D, HIGH); 
      break;

    case 'e':
      digitalWrite(PIN_E, HIGH); 
      break;

    default:
      for (int i = 0; i < 5; i++) { //Uses the array of pins to turn them all low
        digitalWrite(pins[i], LOW); 
      }
      break;
    }
  }
}