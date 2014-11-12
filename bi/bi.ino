/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Break Instruction
 Created on : Wed Nov 12 09:27:14 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 byte, break

 Course material

 MOOC EPFL microcontrollers

*/

#define AttenteMax 5000 // 5 secondes
#define PeriodeEchant 50
#define Pous1 2
#define Pous1On !digitalRead (Pous1)
#define Led 4
#define Led1On digitalWrite (Led,HIGH) ;
#define Led1Off digitalWrite (Led,LOW) ;

byte cnt=0;

void loop() {
while (1) {
  if (Pous1On) { cnt=0; }
  delay (PeriodeEchant) ;
  if (cnt >= AttenteMax/PeriodeEchant) { break; }
  cnt++;
 }
}

void setup () {
  if (Pous1On) { Led1Off; delay (500); }
  else Led1On; delay (500);
}