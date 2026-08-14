int LED_PIN = 10;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);

  int brightness = map(sensorValue, 0, 1023, 0, 255);

  analogWrite(LED_PIN,brightness);

  Serial.print(" ADC reading: ");
  Serial.print(sensorValue);

  Serial.println();

  Serial.print("Analog voltage: ");
  Serial.print(voltage);
  delay(1);
} 
