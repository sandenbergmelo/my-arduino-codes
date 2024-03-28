#include <MFRC522.h>
#include <SPI.h>
#include <string.h>

const int RST_PIN = 9;
const int SDA_PIN = 10;

const int led_cartao_branco = A1;
const int led_chaveiro = 4;

const String cartao_branco_uid = "f3 3b 21 0f";
const String chaveiro_uid = "a3 3e e5 9f";

MFRC522 rfid(SDA_PIN, RST_PIN);

void setup() {
  pinMode(led_cartao_branco, OUTPUT);
  pinMode(led_chaveiro, OUTPUT);

  Serial.begin(9600);

  SPI.begin();
  rfid.PCD_Init();

  Serial.println("Aproxime a sua tag...");
  Serial.println();
}

void loop() {
   //Procura nova tag
  if (!rfid.PICC_IsNewCardPresent()) {
    return;
  }

  // Seleciona uma tag
  if (!rfid.PICC_ReadCardSerial()) {
    return;
  }

  //Mostra UID na serial
  String read_uid= "";

  for (byte i = 0; i < rfid.uid.size; i++) {
    read_uid.concat(String(rfid.uid.uidByte[i] < HEX ? " 0" : " "));
    read_uid.concat(String(rfid.uid.uidByte[i], HEX));
  }

  read_uid.trim();

  if (read_uid == chaveiro_uid) {
    Serial.println("Chaveiro");
    digitalWrite(led_cartao_branco, LOW);
    digitalWrite(led_chaveiro, HIGH);
  }
  else if (read_uid == cartao_branco_uid) {
    Serial.println("Cartão Branco");
    digitalWrite(led_chaveiro, LOW);
    digitalWrite(led_cartao_branco, HIGH);
  }
  else {
    Serial.println("Desconhecido");
    digitalWrite(led_chaveiro, LOW);
    digitalWrite(led_cartao_branco, LOW);
  }
}
