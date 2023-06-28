const int pinSW = A0; // Ligado em uma porta analógica para que todas as conexões ficarem de um lado só
const int pinVRx = A1;
const int pinVRy = A2;


void setup() {
  pinMode(pinSW, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  int pressedSW = !digitalRead(pinSW);

  if (pressedSW) {
    Serial.println("PRESSIONADO!");
    delay(500);
  }

  if (valorVRx == 0) {
    Serial.println("CIMA!");
    delay(500);
  }

  if (valorVRx == 1023) {
    Serial.println("BAIXO!");
    delay(500);
  }

  if (valorVRy == 0) {
    Serial.println("DIREITA!");
    delay(500);
  }

  if (valorVRy == 1023) {
    Serial.println("ESQUERDA!");
    delay(500);
  }
}
