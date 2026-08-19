int ledPin = 13;
int buzzerPin = 8;
int buttonPin = 2;

#define C4 262
#define D4 294
#define E4 330
#define F4 349
#define G4 392
#define A4 440

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonState = digitalRead(buttonPin);

  if (buttonState == LOW){
    digitalWrite(ledPin, HIGH);
     tone(buzzerPin, C4);
    delay(250);

    tone(buzzerPin, C4);
    delay(250);

    tone(buzzerPin, D4);
    delay(500);

    tone(buzzerPin, C4);
    delay(500);

    tone(buzzerPin, F4);
    delay(500);

    tone(buzzerPin, E4);
    delay(1000);

    tone(buzzerPin, C4);
    delay(250);

    tone(buzzerPin, C4);
    delay(250);

    tone(buzzerPin, D4);
    delay(500);

    tone(buzzerPin, C4);
    delay(500);

    tone(buzzerPin, G4);
    delay(500);

    tone(buzzerPin, F4);
    delay(1000);

    tone(buzzerPin, C4);
    delay(250);

    tone(buzzerPin, C4);
    delay(250);

    tone(buzzerPin, A4);
    delay(500);

    tone(buzzerPin, F4);
    delay(500);

    tone(buzzerPin, E4);
    delay(500);

    tone(buzzerPin, D4);
    delay(500);

    tone(buzzerPin, D4);
    delay(250);

    tone(buzzerPin, D4);
    delay(250);

    tone(buzzerPin, C4);
    delay(500);

    tone(buzzerPin, F4);
    delay(500);

    tone(buzzerPin, G4);
    delay(500);

    tone(buzzerPin, F4);
    delay(1000);
  }else{
    noTone(buzzerPin);
    digitalWrite(ledPin, LOW);
  }
}
