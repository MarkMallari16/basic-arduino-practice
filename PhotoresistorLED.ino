int ledPin = 13;
int ldrPin = A0;
int ldrValue;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  ldrValue = analogRead(ldrPin);

  Serial.println(ldrValue);

  if (ldrValue < 300) {
      digitalWrite(ledPin, HIGH);
  } else {
      digitalWrite(ledPin, LOW);
  }

  delay(100);
}
