const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(ledPin,OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 // Runs repeatedly

  // 1. Make sure TRIG is OFF
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // 2. Tell HC-SR04 to send an ultrasonic wave
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // 3. Measure the returned echo
  long duration = pulseIn(echoPin, HIGH);

  // 4. Convert the time into distance
  float distance = duration * 0.0343 / 2;

  // 5. Display the distance
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  //display led

  if (distance <= 20){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }

  delay(500);

}
