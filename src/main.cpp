#include <Arduino.h>

/*  6a. char is a character. This is not only used to represent a letter
*   but also a number like eg. 4 as a character. So it is another way to
*   represent/handle letter number or symbols.
*
*   6b. The value stored in the variable mychar, results in the letter D.
*   This is due to the letters value being changed when we handle it as an int
*   
*/

#define PIN_A 6
#define PIN_B 5
#define PIN_C 4
#define PIN_D 3
#define PIN_E 2

int pins[5] = {
  PIN_A, 
  PIN_B, 
  PIN_C, 
  PIN_D, 
  PIN_E
}; 


void setup() {
for (int i = 0; i < 5; i++) {
  pinMode(pins[i], OUTPUT); 
  digitalWrite(pins[i], LOW); 
}


mychar = (char)(val+'A'-1);
Serial.print(mychar);

}

void loop() {
  if (Serial.available() > 0) {
    char msg = Serial.read(); 

    switch (msg)
    {
    case 'a':
      for (int i = 0; i < 5; i++) {
        digitalWrite(pins[i], LOW); 
      }
      digitalWrite(PIN_A, HIGH); 
      break;

    case 'b':
      for (int i = 0; i < 5; i++) {
        digitalWrite(pins[i], LOW); 
      }
      digitalWrite(PIN_B, HIGH); 
      break;
    
    case 'c':
      for (int i = 0; i < 5; i++) {
        digitalWrite(pins[i], LOW); 
      }
      digitalWrite(PIN_C, HIGH); 
      break;

    case 'd':
      for (int i = 0; i < 5; i++) {
        digitalWrite(pins[i], LOW); 
      }
      digitalWrite(PIN_D, HIGH); 
      break;

    case 'e':
      for (int i = 0; i < 5; i++) {
        digitalWrite(pins[i], LOW); 
      }
      digitalWrite(PIN_E, HIGH); 
      break;

    default:
      for (int i = 0; i < 5; i++) {
        digitalWrite(pins[i], LOW); 
      }
      break;
    }
  }
}

