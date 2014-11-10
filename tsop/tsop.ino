/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Two Second On Press
 Created on : Mon Nov 10 17:40:50 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup delay {}

 Course material

 MOOC EPFL microcontrollers

*/


#define Pous 2
#define PousOn digitalRead (Pous) == 0
#define PousOff digitalRead (Pous) == 1
#define Led 5
#define LedOn digitalWrite (Led,LOW) ;
#define LedOff digitalWrite (Led,HIGH) ;

void setup () {
  pinMode (Pous, INPUT) ;
  pinMode (Led,OUTPUT) ;
}
void loop () {
  if (PousOn) {
    LedOn ; delay (2000);
    LedOff ; // tester un délai ici delay (1000);
  }
  while (PousOn) {}
} 
