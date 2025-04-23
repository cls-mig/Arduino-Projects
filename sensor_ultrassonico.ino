#include "LiquidCrystal_I2C.h"
#include "Wire.h"

LiquidCrystal_I2C lcd(0x27, 16, 2);
int trigPin = 10;
int echoPin = 9;
float distance;
long time;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  lcd.init();
  lcd.setCursor(0, 0);
  lcd.print("distance:");
  lcd.backlight();
  Serial.begin(9600);
}

void loop() {
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  time = pulseIn(echoPin , HIGH);
  Serial.print("time: ");
  Serial.print(time);
  Serial.print("  -  ");
  distance = (time * 0.0343) / 2;
  
  Serial.print("distance: ");
  Serial.print(distance);
  Serial.println("cm");
  
  lcd.setCursor(0,1);
  lcd.print(distance);
  lcd.print("cm");
  lcd.print("                ");

  delay(1000);
}
