/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : LedOnPushOn
 Created on : Mon Nov 10 16:34:09 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup, void loop

 Course material

 MOOC EPFL microcontrollers

*/


#define Pous 2 // pin2 Arduino
#define PousOn digitalRead (Pous) == 0
#define PousOff digitalRead (Pous) == 1
#define Led 5
#define LedOn digitalWrite (Led,LOW) ;
#define LedOff digitalWrite (Led,HIGH) ;

void setup () {
  pinMode (Pous, INPUT) ;
  pinMode (Led, OUTPUT) ;
}
  
void loop () {
  if (PousOn) {
    LedOn ; delay (250);
    LedOff ; delay (250);
  }
}
