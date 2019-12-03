#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  irrecv.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (irrecv.decode(&results)){
    unsigned int value = results.value;
    //Serial.println(value);
    
   switch(value){
    case 41565:  Serial.println("CH-"); break; // Button CH-
    case 25245:  Serial.println("CH"); break; // Button CH
    case 57885:  Serial.println("CH+"); break; // Button CH+
    case 8925:  Serial.println("PREV"); break; // Button PREV
    case 765:  Serial.println("NEXT"); break; // Button NEXT
    case 49725:  Serial.println("PLAY/PAUSE"); break; // Button PLAY/PAUSE
    case 57375:  Serial.println("VOL-"); break; // Button VOL-
    case 43095:  Serial.println("VOL+"); break; // Button VOL+
    case 36975:  Serial.println("EQ"); break; // Button EQ
    case 39015:  Serial.println("100+"); break; // Button 100+
    case 45135:  Serial.println("200+"); break; // Button 200+
    case 26775:  Serial.println("0"); break; // Button 0    
    case 12495:  Serial.println("1"); break; // Button 1
    case 6375:  Serial.println("2"); break; // Button 2
    case 31365:  Serial.println("3"); break; // Button 3
    case 4335:  Serial.println("4"); break; // Button 4
    case 14535:  Serial.println("5"); break; // Button 5
    case 23205:  Serial.println("6"); break; // Button 6
    case 17085:  Serial.println("7"); break; // Button 7
    case 19125:  Serial.println("8"); break; // Button 8
    case 21165:  Serial.println("9"); break; // Button 9
    }
    irrecv.resume();
  }
}
