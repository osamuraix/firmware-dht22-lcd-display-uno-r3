#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

// LCD I2C address อาจเป็น 0x27 หรือ 0x3F แล้วแต่รุ่น
LiquidCrystal_I2C lcd(0x27, 16, 2); 

#define DHTPIN 2          // ขาที่ต่อกับ DATA ของ DHT22
#define DHTTYPE DHT22     // เลือกชนิดเซนเซอร์

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  lcd.init();
  lcd.backlight();

  dht.begin();

  lcd.setCursor(0, 0);
  lcd.print("Reading sensor...");
}

void loop() {
  float temp = dht.readTemperature();     // องศาเซลเซียส
  float humid = dht.readHumidity();

  if (isnan(temp) || isnan(humid)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor error");
  } else {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Temp: ");
    lcd.print(temp, 1);
    lcd.print((char)223); // องศา
    lcd.print("C");

    lcd.setCursor(0, 1);
    lcd.print("Hum: ");
    lcd.print(humid, 1);
    lcd.print("%");
  }

  delay(2000);
}