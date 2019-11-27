void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  for (int j=8; j<13; j++)
  {
    pinMode(j, OUTPUT); 
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0)
  {
    int InputKarakter = Serial.read();
    switch(InputKarakter)
    {
    case 'Q':
      digitalWrite(8, HIGH);
      Serial.println("LED Q ON");
      break;

    case 'W':
      digitalWrite(9, HIGH);
      Serial.println("LED W ON");\

    case 'E':
      digitalWrite(10, HIGH);
      Serial.println("LED W ON");
      break;

    case 'R':
      digitalWrite(11, HIGH);
      Serial.println("LED W ON");
      break;

    case 'T':
      digitalWrite(12, HIGH);
      Serial.println("LED W ON");
      break;

     default:
      for (int j=8; j<13; j++)
      {
        digitalWrite(j,LOW);
        Serial.println("LED OFF");
      }
    }  
  }
}
