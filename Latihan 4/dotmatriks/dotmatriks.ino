#include <TimerOne.h>

int baris[] = {-1, 6, 7, 8, 9, 10, 11, 12, 13};

int kolom[] = {-1, 14, 15, 16, 17, 2, 3, 4, 5};

byte hurufA[] = {
    0x3C,
    0X24,
    0X24,
    0X7E,
    0X62,
    0X62,
    0X62,
    0X00
  };

byte barisSebelum = 8;
byte bitData[8][8];


void setup() {
  // put your setup code here, to run once:
  for(int i = 1; i < 9; i++)
  {
    pinMode(baris[i], OUTPUT);
    pinMode(kolom[i], OUTPUT);

      digitalWrite(baris[i], LOW);
      digitalWrite(kolom[i], HIGH);

  }

    getBitData(hurufA);
    Timer1.initialize(1000);

    Timer1.attachInterrupt(tampilkanhuruf);
    
}

void loop() {
  // put your main code here, to run repeatedly:

}


void getBitData(byte data[])
{
  byte byteData;
  int b,k;

    for(b = 0; b < 8; b++)
    {
      byteData = data[b];

      for (k = 7; k >= 0; k--)
      {
        bitData[b][k] = byteData & 1;
        byteData = byteData >> 1;  
      }
    }
}

void tampilkanhuruf()
{
  byte barisSekarang;
  if (barisSebelum == 8)
    barisSekarang = 1;
  else
    barisSekarang = barisSebelum + 1;  

  digitalWrite(baris[barisSebelum], LOW);

  for(byte k=1; k < 8; k++)
  {
    if(bitData[barisSekarang-1][k-1] == 1)
      digitalWrite(kolom[k], LOW);
    digitalWrite(baris[barisSekarang], HIGH);  
  }

  barisSebelum = barisSekarang;
}
