/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Counter Up Down
 Created on : Tue Nov 11 08:55:16 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup, void loop, !, digitalwrite/read, counter

 Course material

 MOOC EPFL microcontrollers

*/

#define Led1 5 // works on 0
#define Push1 2 // works on 0
#define Push2 3 // works on 0
#define Push1On !digitalRead (Push1) // works on 0
#define Push2On !digitalRead (Push2) // works on 0
#define Led1On digitalWrite (Led1, HIGH)
#define Led1Off digitalWrite (Led1, LOW)

void setup() {
  pinMode (Led1, OUTPUT);
  pinMode (Push1, INPUT);
  pinMode (Push2, INPUT);
}
byte counter = 6;
void loop() {
  if (Push1On) {
    if (counter < 7) {
      counter ++;
      if (counter & 0x01) Led1On ;
      else Led1Off ;
      delay (200);
    }
  }
  if (Push2On) {
    if (counter >0) {
      counter --;
      if (counter & 0x01) Led1On ;
      else Led1Off ;
      delay (200);
    }
  }
}
