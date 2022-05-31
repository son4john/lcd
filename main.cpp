#include <Arduino.h>
#include <LiquidCrystal.h>

LiquidCrystal lcd(1,2,4,5,6,7);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2); // set dimensions of lcd
}

void loop() {
  lcd.print("Arduino");
  delay(3000);
  lcd.print("Johnson");
  delay(3000);
  lcd.clear();
  // put your main code here, to run repeatedly:
}