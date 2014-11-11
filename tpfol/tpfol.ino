/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Two Pushbutton For One Led
 Created on : Tue Nov 11 07:46:23 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup, void loop, !, digitalwrite/read

 Course material

 MOOC EPFL microcontrollers

*/


#define Pous1 2
#define Pous2 3
#define Pous1On !digitalRead (Pous1)
#define Pous2On !digitalRead (Pous2)
#define Led 5
#define LedOn digitalWrite (Led,HIGH) ;
#define LedOff digitalWrite (Led,LOW) ;

void setup () {
  pinMode (Pous1, INPUT) ;
  pinMode (Pous2, INPUT) ;
  pinMode (Led, OUTPUT) ;
}

void loop () {
  if (Pous1On) { LedOn ; delay (20); }
  if (Pous2On) { LedOff ; delay (20); }
}