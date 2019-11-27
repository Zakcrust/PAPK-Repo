#include <SoftwareSerial.h>

int segA = 5; // >> 11
int segB = 13; // >> 7
int segC = 10;
int segD = 8;
int segE = 7;
int segF = 4;
int segG = 11;
int segPt = 9;

int d1 = 6;
int d2 = 3;
int d3 = 2;
int d4 = 12;

void setup()
{
  for(byte pin = 2; pin <= 13; pin ++)
  {
    pinMode(pin,OUTPUT);  
  }  
}

void loop()
{
  digitalWrite(d1, HIGH);
  digitalWrite(d2, HIGH);
  digitalWrite(d3, HIGH);
  digitalWrite(d4, HIGH);

  digitalWrite(segA, HIGH);
  digitalWrite(segB, HIGH);
  digitalWrite(segC, HIGH);
  digitalWrite(segD, HIGH);
}
