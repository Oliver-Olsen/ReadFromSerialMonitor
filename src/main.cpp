#include <Arduino.h>

/*  6a. char is a character. This is not only used to represent a letter
*   but also a number like eg. 4 as a character. So it is another way to
*   represent/handle letter number or symbols.
*
*   6b. The value stored in the variable mychar, results in the letter D.
*   This is due to the letters value being changed when we handle it as an int
*   
*/

char mychar = 4;
int val = mychar - 0;


void setup() {
Serial.begin(9600);

mychar = (char)(val+'A'-1);
Serial.print(mychar);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(mychar);
  delay(1000);
}

