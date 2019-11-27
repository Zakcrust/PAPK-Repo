#include <LedControl.h>

LedControl led = LedControl(12,11,10,2);

byte panah_1 [] = {
  B00111000,
  B00111000,
  B00111000,
  B11111110,
  B01111100,
  B00111000,
  B00010000,
  B00000000
};
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < 2; i++)
  {
    led.shutdown(i, false);
    led.setIntensity(i, 1);
    led.clearDisplay(i);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i= 0; i < 2; i++)
    getArrDown(i);
}

void getArrDown(byte w)
{
  for (int a = 0; a < 8; a++)
    led.setRow(w, a, panah_1[a]);  
}
