const int PIN_A = 2;
const int PIN_B = 3;
const int PIN_C = 4;
const int PIN_D = 5;
const int PIN_E = 6;
const int PIN_F = 7;
const int PIN_G = 8;
const int PIN_DP = 9;

void setup() {
  // put your setup code here, to run once:
  for(byte pin = PIN_A; pin <= PIN_DP ; pin ++)
  {
    pinMode(pin, OUTPUT);
    digitalWrite(pin, HIGH);  
  }
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(PIN_A,LOW);
  delay(1000);
  digitalWrite(PIN_A,HIGH);
  delay(250);
  digitalWrite(PIN_B,LOW);
  delay(1000);
  digitalWrite(PIN_B,HIGH);
  delay(250);
  digitalWrite(PIN_C,LOW);
  delay(1000);
  digitalWrite(PIN_C,HIGH);
  delay(250);
  digitalWrite(PIN_D,LOW);
  delay(1000);
  digitalWrite(PIN_D,HIGH);
  delay(250);
  digitalWrite(PIN_E,LOW);
  delay(1000);
  digitalWrite(PIN_E,HIGH);
  delay(250);
  digitalWrite(PIN_F,LOW);
  delay(1000);
  digitalWrite(PIN_F,HIGH);
  delay(250);
  digitalWrite(PIN_G,LOW);
  delay(1000);
  digitalWrite(PIN_G,HIGH);
  delay(250);
  digitalWrite(PIN_DP,LOW);
  delay(1000);
  digitalWrite(PIN_DP,HIGH);
  delay(250);
}
