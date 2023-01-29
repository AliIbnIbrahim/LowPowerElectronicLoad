#include <LCD_I2C_Teensy36.h>

// Set the LCD address to 0x27 for a 16 chars and 2 line display
LCD_I2C_Teensy36 lcd(0x27, 20, 4);

void setup()
{
	// initialize the LCD
	lcd.begin();

	// Turn on the blacklight and print a message.
	//lcd.backlight();
	//lcd.print("Hello, world!");
 
// lcd.init();                      // initialize the lcd 
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
	// Do nothing here...
}
