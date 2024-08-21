
#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
lcd.init(); //initialisation 
lcd.backlight(); // s'alume led 
  

}

void loop() {
  lcd.setCursor(0,0);  // coloune ligne
  lcd.print("AMIRA FRIH");
  lcd.setCursor(0,1);
  lcd.print("WELCOME TO LCD I2C ");
 lcd.backlight();
 //delay(1000);
 //lcd.noBacklight(); fermer led
 // delay(1000);

 lcd.scrollDisplayLeft();
 delay(100);
 lcd.scrollDisplayRight();
 delay(100);
}
