int buzzerPin = 11;
int ledPins[] = {2,3,4,5,6,7,8,9,10};
int potentioPin = A0;

void setup() {
    Serial.begin(9600);

    for (int i = 0; i < 9; i++){
      pinMode(ledPins[i], OUTPUT);
      pinMode(buzzerPin, OUTPUT);
    }
}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(potentioPin);
  
  int potentioLedVal = map(potValue, 0, 1023, 0, 12);
  
 for (int i = 0; i < 9; i++) {

    if(i < potentioLedVal) {
      digitalWrite(ledPins[i], HIGH);
    } else {
      digitalWrite(ledPins[i], LOW);
    }

  }

  int buzzerDelay = map(potValue, 1, 1023, 800,50);

  digitalWrite(buzzerPin, HIGH);
  delay(buzzerDelay);
  digitalWrite(buzzerPin, LOW);
  delay(buzzerDelay);
  
  Serial.println(potValue);
 
}
