int pinBuzz = 8;
void setup()
{
  pinMode(pinBuzz, OUTPUT);
}
void loop()
{
  tone(pinBuzz,1000,200);
}
