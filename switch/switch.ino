/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Swithch on / Switch off
 Created on : Fri Nov 14 16:54:39 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References

 int, fade, pin analogWrite, analogRead

 Course material

 Arduino switch exemple modified by my own

 The LearnCBot have 4 leds (2 green and 2 red)
 This source code light on to off and on them all with one button.

 The red and green don't fade the same maner not because of the program
 but because of the property of the material itself.
  
 */


int inPin = 2;         // the number of the input pin
int outPin1 = 6;       // the number of the output pin
int outPin2 = 5;
int outPin3 = 4;
int outPin4 = 7;

int state = HIGH;      // the current state of the output pin
int reading;           // the current reading from the input pin
int previous = LOW;    // the previous reading from the input pin

// the follow variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long time = 0;         // the last time the output pin was toggled
long debounce = 200;   // the debounce time, increase if the output flickers

void setup()
{
  pinMode(inPin, INPUT);
  pinMode(outPin1, OUTPUT);
  pinMode(outPin2, OUTPUT);
  pinMode(outPin3, OUTPUT);
  pinMode(outPin4, OUTPUT);
}

void loop()
{
  reading = digitalRead(inPin);

  // if the input just went from LOW and HIGH and we've waited long enough
  // to ignore any noise on the circuit, toggle the output pin and remember
  // the time
  if (reading == HIGH && previous == LOW && millis() - time > debounce) {
    if (state == HIGH)
      state = LOW;
    else
      state = HIGH;

    time = millis();
  }

  digitalWrite(outPin1, state);
  digitalWrite(outPin2, state);
  digitalWrite(outPin3, state);
  digitalWrite(outPin4, state);

  previous = reading;
}