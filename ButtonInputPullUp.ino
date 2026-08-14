
//button pins
const int buttonPinOne = 2;
const int buttonPinTwo = 3;
const int buttonPinThree = 4;

//led pins
const int ledPinOne = 11;
const int ledPinTwo = 12;
const int ledPinThree = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPinOne, INPUT_PULLUP);
  pinMode(buttonPinTwo, INPUT_PULLUP);
  pinMode(buttonPinThree, INPUT_PULLUP);

  pinMode(ledPinOne, OUTPUT);
  pinMode(ledPinTwo, OUTPUT);
  pinMode(ledPinThree, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //button states
  int buttonStatePinOne = digitalRead(buttonPinOne);
  int buttonStatePinTwo = digitalRead(buttonPinTwo);
  int buttonStatePinThree = digitalRead(buttonPinThree);

  //check the button conditions
  if (buttonStatePinOne == LOW){
    digitalWrite(ledPinOne, HIGH);
  }else{
    digitalWrite(ledPinOne, LOW);
  }

  if (buttonStatePinTwo == LOW){
    digitalWrite(ledPinTwo, HIGH);
  }else{
    digitalWrite(ledPinTwo, LOW);
  }

   if (buttonStatePinThree == LOW){
    digitalWrite(ledPinThree, HIGH);
  }else{
    digitalWrite(ledPinThree, LOW);
  }
}
