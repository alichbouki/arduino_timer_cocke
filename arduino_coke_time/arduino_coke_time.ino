#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd (0x27, 16, 2);

int led_Off = 2;
int led_On = 3;
int buz = 4;
int btn = 5;

void setup() {
  
  lcd.begin(16, 2);
  lcd.init();
  lcd.setBacklight(HIGH);

  pinMode(btn, INPUT_PULLUP);

  for (int i = led_On; i < 6; i++) {
    pinMode(i,OUTPUT);
  }

}

void loop() {

}
