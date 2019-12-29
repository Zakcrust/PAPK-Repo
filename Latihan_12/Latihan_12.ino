#include <Servo.h>

int potPin = A0;
int serPin = 10;
int val;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(serPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potPin);
  val = map(val, 0, 1023, 0, 180);
  Serial.println(val);
  myservo.write(val);
  delay(15);
}
