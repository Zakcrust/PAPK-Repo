#include <MFRC522.h>
#include <SPI.h>


#define SS_PIN 10
#define RST_PIN 9
MFRC522 mfrc522(SS_PIN, RST_PIN);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("Dekatkan tag ke reader");
  Serial.println();
}

void loop() {
  // put your main code here, to run repeatedly:
  if(! mfrc522.PICC_IsNewCardPresent())
    return;

  if(! mfrc522.PICC_ReadCardSerial())\
    return;

  Serial.print("UID tag :");
  for(byte i = 0; i < mfrc522.uid.size; i++)
  {
    Serial.print(mfrc522.uid.uidByte[i] < 0x10 ? " 0" : " ");
    Serial.print(mfrc522.uid.uidByte[i], HEX);
  }
  Serial.println();
}
