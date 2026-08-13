

int leds[] = {13,12,11,10,9};

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  for (int i = 0; i < 5; i++){
    pinMode(leds[i],OUTPUT);
  }
}

// the loop function runs over and over again forever
void loop() {
  //odd led
  for (int i = 0;i < 5;i++){
    if (i % 2 == 0){
      digitalWrite(leds[i],HIGH);
    }else{
      digitalWrite(leds[i],LOW);
    }
  }

  delay(1000);

  //even led
  for (int i = 0;i < 5;i++){
    if (i % 2 == 0){
      digitalWrite(leds[i],LOW);
    }else{
      digitalWrite(leds[i],HIGH);
    }
  }
  
  delay(1000);

  //all on
  for (int i = 0;i < 5;i++){
    digitalWrite(leds[i],HIGH);
  }

  delay(1000);

  //all off
  for (int i = 0;i < 5;i++){
    digitalWrite(leds[i],LOW);
  }

  delay(1000);
             
}
