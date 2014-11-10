/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : One Pushbutton For Two Leds
 Created on : Mon Nov 10 18:20:32 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup, void loop, !

 Course material

 MOOC EPFL microcontrollers

*/


#define Led1 5 // Actif à 0 MSP Energia pin xx
#define Led2 6
#define Led1Toggle digitalWrite (Led1, !digitalRead (Led1))
#define Led2Toggle digitalWrite (Led2, !digitalRead (Led2))

#define Pous 2 // actif à 0
#define PousOn !digitalRead(Pous)

void setup() {
  pinMode (Pous,INPUT);
  pinMode (Led1,OUTPUT);
  pinMode (Led2,OUTPUT);
}

void loop () {
  while (PousOn) {delay (20);}
  while (!PousOn){delay (20);}
  Led1Toggle;
  if (digitalRead (Led1)) {
    Led2Toggle;
  }
}
