
#include <IRremote.h>


#define tombol_satu 12495
#define tombol_dua 6375

int receiver_pin = 7;

int pin_led1 = 3;
int pin_led2 = 5;
int led[] = {0,0};

IRrecv receiver(receiver_pin);
decode_results output;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  receiver.enableIRIn();
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(receiver.decode(&output))
  {
    unsigned int value = output.value;
    Serial.println(value);
    switch(value)
    {
      case tombol_satu:
        if(led[0]==1)
        {
          digitalWrite(pin_led1, LOW);
          led[0] = 0;
        }
        else
        {
          digitalWrite(pin_led1, HIGH);
          led[0] = 1;
        }
        break;
        case tombol_dua:
        if(led[1]==1)
        {
          digitalWrite(pin_led2, LOW);
          led[1] = 0;
        }
        else
        {
          digitalWrite(pin_led2, HIGH);
          led[1] = 1;
        }
        break;
        default:
        {
        
        }
    }
    Serial.println(value);
    receiver.resume();
  }
  }
