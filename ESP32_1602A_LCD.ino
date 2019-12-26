#include <LiquidCrystal.h>
LiquidCrystal lcd(22,21,5,18,23,19);
void setup()
{
    lcd.begin(16, 2);
    lcd.clear();
    lcd.print("Interfacing LCD");

    lcd.setCursor(0,1); 
    lcd.print ("with ESP32");
}
void loop(){}
