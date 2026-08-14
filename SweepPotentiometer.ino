/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 https://www.arduino.cc/en/Tutorial/LibraryExamples/Sweep
*/

#include <Servo.h>

Servo myservo;  // create Servo object to control a servo
// twelve Servo objects can be created on most boards

const int servoPin = 8;

int pos = 0;    // variable to store the servo position
int actualAngle = 0;
int potPin = A0;

void setup() {
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the Servo object
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);

  int angle = map(potValue, 0, 1023, 0, 180);

  myservo.write(angle);

  Serial.println(angle);

  delay(15);
}
