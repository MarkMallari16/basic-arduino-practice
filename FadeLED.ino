int LED_PIN = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  //increment
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5){
    analogWrite(LED_PIN, fadeValue);
    delay(5);
  }

  //decrement
  for (int fadeValue = 255; fadeValue >= 0; fadeValue -= 5){
    analogWrite(LED_PIN, fadeValue);
    delay(5);
  }
}