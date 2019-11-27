int pinBuzz = 8;

int nada[] = {
  262,294,330,349,392,330,262,440,525,494,440,392
  };

int noteDurations[] = {
  2, 4, 3, 3, 2, 4, 2,
  2, 4, 3, 3, 2
  };

void setup()
{
  
}

void loop()
{
 for(int thisNote =0; thisNote < 12; thisNote++)
 {
 int noteDuration = 1000 / noteDurations[thisNote];
      tone(pinBuzz,nada[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
      noTone(pinBuzz);
 }
 delay(3000);
  
}
