#include <Servo.h>

Servo barrier;

int servoPin = 13;

void setup() {
  barrier.attach(servoPin);

  barrier.write(90);
  delay(1000);

  barrier.write(180);

}

void loop() {
  // put your main code here, to run repeatedly:
  barrier.write(180);
  delay(1000);
  barrier.write(90);
  delay(1000);
}
