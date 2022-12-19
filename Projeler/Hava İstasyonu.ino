#include <Wire.h>      //Library for using I2C 
#include <LiquidCrystal_I2C.h>  //Library for using I2C type LCD display
#include <DHT.h>                    //Library for using DHT sensor 

#define DHTPIN PA1 

#define DHTTYPE DHT11

LiquidCrystal_I2C lcd(0x27, 16, 2);  //initilize object lcd for class LiquidCrystal_I2C with I2C address of 0x27 and 16x2 type LCD display

DHT dht(DHTPIN, DHTTYPE);     //initilize object dht for class DHT with DHT pin with STM32 and DHT type as DHT11

void setup()
{
  // initialize the LCD
  lcd.begin();
  dht.begin();          //Begins to receive Temperature and humidity values.                        
  lcd.backlight();      // Turn on the blacklight and print a welcome message.
  lcd.setCursor(0,0);
  lcd.print("   ROBOTISTAN");
  lcd.setCursor(0,1);
  lcd.print(" HAVA ISTASYONU");
  delay(3000);
  lcd.clear();
}

void loop()
{
  float h = dht.readHumidity();       //Gets Humidity value
  float t = dht.readTemperature();    //Gets Temperature value
  lcd.setCursor(0,0);
  lcd.print("SICAKLIK:");
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("NEM: ");
  lcd.print(h);
  lcd.print(" %");
}
