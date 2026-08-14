#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

String lyrics[] = {
  "God you look so",
  "pretty",
  "when you tell",
  "me",
  "that you love",
  "me....",
  "i wish that I",
  "could lie",
  "but my mind",
  "gets in the way",
  "i know you",
  "think that i'm",
  "always way",
  "too self aware",
};

void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.clear();

  typeText(lyrics[0], 0, 400);
  typeText(lyrics[1], 1, 500);

  lcd.clear();

  typeText(lyrics[2], 0, 500);
  typeText(lyrics[3], 1, 500);

  lcd.clear();

  typeText(lyrics[4], 0, 500);
  typeText(lyrics[5], 1, 600);

  lcd.clear();

  typeText(lyrics[6], 0, 500);
  typeText(lyrics[7], 1, 500);

  lcd.clear();

  typeText(lyrics[8], 0, 500);
  typeText(lyrics[9], 1, 500);

  lcd.clear();

  typeText(lyrics[10], 0, 500);
  typeText(lyrics[11], 1, 500);

  lcd.clear();

  typeText(lyrics[12], 0, 500);
  typeText(lyrics[13], 1, 500);

  lcd.clear();

}

void typeText(String text, int row, int speed){
  lcd.setCursor(0, row);

  lcd.print(text);
  delay(speed);
}