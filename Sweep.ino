/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);
    myser.attach(5);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { 
    myservo.write(pos);              
    delay(15);   
    myser.write(pos);              
    delay(15);                      
  }
  
  for (pos = 180; pos >= 0; pos -= 1) { 
    myservo.write(pos);
    delay(15);  
    myser.write(pos);
    delay(15);        
                  
  }
}

