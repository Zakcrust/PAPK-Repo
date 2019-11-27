byte pin [] = {2, 3, 4, 5, 6, 7, 8, 9};

byte angka[20][8] = {
  {0, 1, 1, 0, 1, 1, 1, 0},
  {1, 1, 1, 0, 1, 1, 1, 0},
  {0, 0, 0, 1, 1, 1, 0, 0},
  {1, 1, 1, 1, 1, 1, 0, 0},
  
};
void setup() {
  // put your setup code here, to run once:
  for(byte indeks =0; indeks < 8; indeks++)
  {
    pinMode(pin[indeks], OUTPUT);
    digitalWrite(pin[indeks], HIGH);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  int bil, indeks;

  for(bil = 0; bil <= 19; bil++)
  {
    for(indeks = 0; indeks < 8; indeks++)
    {
      digitalWrite(pin[indeks], HIGH);  
    }

    for(indeks = 0; indeks < 8; indeks++)
    {
      if(angka[bil][indeks] == 1)
        digitalWrite(pin[indeks], LOW);
    }
    delay(500);
  }

  }
