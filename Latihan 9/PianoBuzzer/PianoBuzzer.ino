#define DO  262
#define RE  294
#define MI  330
#define FA  349
#define SOL 392
#define LA  440
#define SI  494
#define DO1  525

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int keyVal = analogRead(A0);

  /*if (keyVal >= 1010 && keyVal <= 1025)
  {
    tone(8, DO);
  }
  else if (keyVal >= 400 && keyVal <= 410)
  {
    tone(8, RE);  
  }
  else if (keyVal >= 505 && keyVal <= 515)
  {
    tone(8, MI);  
  }
  else
    noTone(8);
  */
  if(digitalRead(2) == HIGH)
  {
    tone(8, MI);  
  }
}
