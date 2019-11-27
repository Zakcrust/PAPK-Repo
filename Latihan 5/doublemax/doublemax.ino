#include <LedControl.h>

LedControl led = LedControl(12,11,10,1);

void setup() {
  // put your setup code here, to run once:
    
    led.shutdown(0, false);
    led.setIntensity(0, 1);
    led.clearDisplay(0);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  animasi_baris();
  animasi_kolom();
}

void animasi_baris()
{
  led.clearDisplay(0);

  for(int baris = 0; baris < 8; baris++)
  {
    led.setRow(0,baris,B11111111);
    delay(25);
    led.setRow(0, baris, B00000000);
    delay(25);
  }

  for( int baris = 0; baris < 8; baris++)
  {
    for(int kolom = 0; kolom < 8; kolom++)
    {
      led.setLed(0, baris, kolom, true);
      delay(25);  
    }  
  }

  for (int baris = 0; baris < 8; baris++)
  {
    for (int kolom = 0; kolom < 8; kolom++)
    {
      led.setLed(0, baris, kolom, false);
      delay(25);
    }  
  }
}

void animasi_kolom()
{
  led.clearDisplay(0);

  for (int kolom = 0; kolom < 8; kolom ++)
  {
    led.setColumn(0, kolom, B11111111);    
    delay(25);
    led.setColumn(0, kolom, B00000000);
    delay(25);  
  }

  for( int baris = 0; baris < 8; baris++)
  {
    for(int kolom = 0; kolom < 8; kolom++)
    {
      led.setLed(0, kolom, baris, true);
      delay(25);  
    }  
  }

  for (int baris = 0; baris < 8; baris++)
  {
    for (int kolom = 0; kolom < 8; kolom++)
    {
      led.setLed(0, kolom, baris, false);
      delay(25);
    }  
  }
}
