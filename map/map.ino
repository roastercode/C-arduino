/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : map for / and *
 Created on : Tue Nov 11 21:32:49 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup, void loop, !, digitalwrite/read, counter

 Course material

 MOOC EPFL microcontrollers

*/

#define Led1 5 // on at 0
#define Led1Toggle digitalWrite (Led1, !digitalRead (Led1))


void setup() {
  pinMode (Led1, OUTPUT);

}
int cnt, y;
void loop () {
  cnt = 0;
  while (cnt++ < 10000) {
    y = map (500,240,680,32,35) ;
  }
  Led1Toggle;
}