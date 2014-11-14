/*

 License    : GNU GPL v3 or later
 Author     : Aurélien DESBRIERES
 Mail       : aurelien@hackers.camp
 Project    : Turn led on one by one with one button
 Created on : Fri Nov 14 23:02:37 2014

 Write && Compile with Emacs-Nox for ATMega328p && LearnCBot Shield

 References
 
 define, void setup, void loop, !, digitalwrite/read

 Course material

 Own challenge turn led on one by one with one button

*/

int bp = 2;                        // Button pin
int lp1 = 5;                       // Led pin
int lp2 = 6;
int cs = 2;                        // Current state


void setup() {
  pinMode(bp, INPUT);              // Set the switch pin to be an input
  pinMode(lp1, OUTPUT);            // Set the LED1 pin to be an output
  pinMode(lp2, OUTPUT);            // Set the LED2 pin to be an output
}

void loop()
{
  if (digitalRead(bp) == LOW)
    {
      switch (cs)
	{
	case 2:                    // No LEDs on
	  digitalWrite(lp1, LOW);  // Turn on the LED 1
	  cs++;
	  break;

	case 3:                    // LED1 is on
	  digitalWrite(lp2, LOW);  // Turn on the LED 2
	  cs++;
	  break;

	default:                   // All LEDs are on
	  digitalWrite(lp1, HIGH); // Turn off the LED 1
	  digitalWrite(lp2, HIGH); // Turn off the LED 2
	  cs = 2;                  // Reset the counter
	}
    }
}

