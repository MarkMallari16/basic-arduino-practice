// C++ code
//
int RED_LED_PIN = 13;
int YELLOW_LED_PIN = 12;
int GREEN_LED_PIN = 11;

void setup()
{
	pinMode(RED_LED_PIN,OUTPUT);
  	pinMode(YELLOW_LED_PIN,OUTPUT);
	pinMode(GREEN_LED_PIN,OUTPUT);
}

void loop()
{
	digitalWrite(RED_LED_PIN,HIGH);
  	digitalWrite(YELLOW_LED_PIN,LOW);
	digitalWrite(GREEN_LED_PIN,LOW);
  
  	delay(5000);
  
  	digitalWrite(RED_LED_PIN,LOW);
  	digitalWrite(YELLOW_LED_PIN,HIGH);
  	digitalWrite(GREEN_LED_PIN,LOW);
  
  	delay(3000);
  
  	digitalWrite(RED_LED_PIN,LOW);
  	digitalWrite(YELLOW_LED_PIN,LOW);
	digitalWrite(GREEN_LED_PIN,HIGH);
  
	delay(5000);
}