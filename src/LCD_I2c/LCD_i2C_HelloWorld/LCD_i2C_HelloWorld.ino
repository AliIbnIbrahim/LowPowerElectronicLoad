//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,4);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  // Print a message to the LCD.
  lcd.backlight();
  lcd.setCursor(3,0);
  lcd.print("Projet ABB");
  lcd.setCursor(2,1);
  lcd.print("Electronic Load");
   lcd.setCursor(8,2);
  lcd.print("600W ");
   lcd.setCursor(2,3);
  lcd.print("Programmable!");
}


void loop()
{
}
