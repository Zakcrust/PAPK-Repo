int ledState = LOW;
unsigned long previousMillis = 0;
const long interval = 1000;

void setup()
{
  Serial.begin(9600);
  for (int ledPin = 8;  ledPin < 13; ledPin ++)
  {
    pinMode(ledPin,OUTPUT);
    digitalWrite(ledPin, ledState);
  }
}

void loop()
{
  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
    Serial.print("State Changed");
    ledState = !ledState;
  }  

  for (int ledPin = 8; ledPin < 13; ledPin ++)
    digitalWrite(ledPin,ledState);
}
