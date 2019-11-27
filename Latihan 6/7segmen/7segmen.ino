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
  digitalWrite(PIN_A, LOW);
  digitalWrite(PIN_B, LOW);
  digitalWrite(PIN_C, LOW);
  digitalWrite(PIN_D, LOW);
  
}
