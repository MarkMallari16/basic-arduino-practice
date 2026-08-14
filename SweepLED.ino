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

const int servoPin = 6;
const int ledPin = 3;

int pos = 0;    // variable to store the servo position
int actualAngle = 0;

void setup() {
  myservo.attach(servoPin);  // attaches the servo on pin 9 to the Servo object
  pinMode(ledPin,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for (int angle = 0; angle <= 180;angle++){
    myservo.write(angle);

    int brightness = map(angle, 0, 180, 0, 255);

    analogWrite(ledPin, brightness);

    delay(5);
  }

  for (int angle = 180; angle >= 0;angle--){
    myservo.write(angle);

    int brightness = map(angle, 0, 180, 0, 255);

    analogWrite(ledPin, brightness);

    delay(5);
  }

}
