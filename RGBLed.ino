// C++ code
//
int redPin = 11;
int bluePin = 10;
int greenPin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop()
{
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  delay(1000);
  
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  delay(1000);
  
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  delay(1000);
}