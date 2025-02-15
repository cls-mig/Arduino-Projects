#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.print("CEFET");
}

void loop()
{
  
}

/*
#include <Wire.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);
  Serial.println("Scanning I2C...");

  Wire.begin();
  for (byte address = 1; address < 127; address++) {
    Wire.beginTransmission(address);
    if (Wire.endTransmission() == 0) {
      Serial.print("Dispositivo encontrado no endereço 0x");
      Serial.println(address, HEX);
      delay(500);
    }
  }
}

void loop() {}
*/
