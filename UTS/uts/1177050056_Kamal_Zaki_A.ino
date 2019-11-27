byte pin [] = {2, 3, 4, 5, 6, 7, 8, 9};
int bil=5;

int merah_1 = 11;
int kuning_1 = 12;
int hijau_1 = 13;
int hijau_2 = 0;
int merah_2 = 1;
int button = 10;
bool isMove = false;
int isButtonPressed = HIGH;
unsigned long previousMillis = 0;
const long interval = 1000;


byte angka[10][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1, 0}, // 2
  {1, 1, 1, 1, 0, 0, 1, 0}, // 3
  {0, 1, 1, 0, 0, 1, 1, 0}, // 4
  {1, 0, 1, 1, 0, 1, 1, 0}, // 5
  {1, 0, 1, 1, 1, 1, 1, 0}, // 6
  {1, 1, 1, 0, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1, 0}, // 8
  {1, 1, 1, 1, 0, 1, 1, 0} // 9
};
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  for(byte indeks =0; indeks < 8; indeks++)
  {
    pinMode(pin[indeks], OUTPUT);
    digitalWrite(pin[indeks], HIGH);
  }
  pinMode(merah_1,OUTPUT);
  pinMode(kuning_1,OUTPUT);
  pinMode(hijau_1,OUTPUT);
  pinMode(hijau_2,OUTPUT);
  pinMode(merah_2,OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(merah_1, LOW);
  digitalWrite(kuning_1, LOW);
  digitalWrite(hijau_1, LOW);
  digitalWrite(hijau_2, LOW);
  digitalWrite(merah_2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  int indeks, bil;
  int counter = 0;
  /*if (currentMillis - previousMillis >= interval)
  {
    previousMillis = currentMillis;
    itsShowTime(bil);
    if(bil >0)
      bil --;
    else
      bil =5;
  }
  isButtonPressed = digitalRead(button);

  if(isButtonPressed == LOW)
    Serial.print("Tombol ditekan");
  */
  checkMove(isMove);
  for(bil = 5; bil >=0 ; bil--)
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
    counter++;
    if(counter == 3)
      switchLamp(kuning_1);
    else if(counter == 5)
    {
        isMove = !isMove;
        checkMove(isMove);
    }
    else
      checkMove(isMove);
    
    delay(1000);
  }
  
  }

  void switchLamp(int pin)
  {
    digitalWrite(merah_1, LOW);
    digitalWrite(kuning_1, LOW);
    digitalWrite(hijau_1, LOW);

    digitalWrite(pin, HIGH);
  }

  void switchCrossingLamp(int pin)
  {
    digitalWrite(merah_2, LOW);
    digitalWrite(hijau_2, LOW);

    digitalWrite(pin, HIGH);
  }

  void checkMove(bool isMove)
  {
    if(isMove)
    {
      switchLamp(hijau_1);
      switchCrossingLamp(merah_2);
      Serial.print("Jalan lampu hijau");
      Serial.print("Tidak boleh menyebrang");
      
    }
    else
    {
      switchLamp(merah_1);
      switchCrossingLamp(hijau_2);
      
    }
      
  }


/*
  void itsShowTime(int bil)
  {
      for(int indeks = 0; indeks < 8; indeks++)
      {
        digitalWrite(pin[indeks], HIGH);  
      }

      for(int indeks = 0; indeks < 8; indeks++)
      {
        if(angka[bil][indeks] == 1)
          digitalWrite(pin[indeks], LOW);
      }
      counter++;
      Serial.print(counter);
      if(counter == 3)
      {
        switchLamp(kuning_1);
      }
      else if(counter == 5)
      {
          isMove = !isMove;
          checkMove(isMove);
          counter = 0;
      }
    
  }
*/
