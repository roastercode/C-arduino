/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Break Instruction
 Created on : Fri Nov 14 16:54:39 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References

 int, fade, pin analogWrite, analogRead

 Course material

 Arduino exemple modified by my own

 The LearnCBot have 4 leds (2 green and 2 red)
 This source code light and fade them all.

 The red and green don't fade the same maner not because of the program
 but because of the property of the material itself.
  
 */


int led1 = 7;           // the pin that the LED is attached to
int led2 = 6;
int led3 = 5;
int led4 = 4;
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare pin 9 to be an output:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of pin 9:
  analogWrite(led1, brightness);    
  analogWrite(led2, brightness);
  analogWrite(led3, brightness);
  analogWrite(led4, brightness);
 
  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

