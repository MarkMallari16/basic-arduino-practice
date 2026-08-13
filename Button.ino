int LED_PIN = 13; // pin for led
int  BUTTON_PIN = 2; //pin for button

//it will only run once
void setup() {
  pinMode(LED_PIN,OUTPUT);
  pinMode(2,INPUT);

}

//this will run simultaneously
void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == LOW){
    digitalWrite(LED_PIN,HIGH);
  }else{
    digitalWrite(LED_PIN,LOW);
  }
}
