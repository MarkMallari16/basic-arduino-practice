int buzzerPinOne = 7;
int buzzerPinTwo = 8;
int ledPin = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPinOne, OUTPUT);
  pinMode(buzzerPinTwo, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(buzzerPinOne, HIGH);
  digitalWrite(buzzerPinTwo, HIGH);
  digitalWrite(ledPin, HIGH);

  delay(1000);

  digitalWrite(buzzerPinOne, LOW);
  digitalWrite(buzzerPinTwo, LOW);
  digitalWrite(ledPin, LOW);

  delay(1000);
}
