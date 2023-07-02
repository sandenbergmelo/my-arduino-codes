// Joystick
const int pinSW = A0; // Ligado em uma porta analógica para que todas as conexões fiquem de um lado só
const int pinVRx = A1;
const int pinVRy = A2;

// Leds
const int ledMeio = 9;
const int ledCima = 11;
const int ledBaixo = 12;
const int ledEsqueda = 13;
const int ledDireita = 3;

const int ATRASO = 200;
int estadoLedMeio = LOW;

void setup() {
  pinMode(pinSW, INPUT_PULLUP);

  pinMode(ledMeio, OUTPUT);
  pinMode(ledCima, OUTPUT);
  pinMode(ledBaixo, OUTPUT);
  pinMode(ledEsqueda, OUTPUT);
  pinMode(ledDireita, OUTPUT);

  Serial.begin(9600);
}

void apagarTudo() {
  digitalWrite(ledMeio, LOW);
  digitalWrite(ledCima, LOW);
  digitalWrite(ledBaixo, LOW);
  digitalWrite(ledEsqueda, LOW);
  digitalWrite(ledDireita, LOW);
}

void acenderLed(int led) {
  apagarTudo();

  if (led == ledMeio) {
    digitalWrite(ledMeio, !estadoLedMeio);
    estadoLedMeio = !estadoLedMeio;
  }
  else {
    digitalWrite(led, HIGH);
    estadoLedMeio = LOW;
  }

  delay(ATRASO);
}

void loop() {
  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  int SWpressionado = !digitalRead(pinSW);

  if (SWpressionado) {
    Serial.println("PRESSIONADO!");
    acenderLed(ledMeio);
  }

  if (valorVRx == 0) {
    Serial.println("CIMA!");
    acenderLed(ledCima);
  }

  if (valorVRx == 1023) {
    Serial.println("BAIXO!");
    acenderLed(ledBaixo);
  }

  if (valorVRy == 0) {
    Serial.println("DIREITA!");
    acenderLed(ledDireita);
  }

  if (valorVRy == 1023) {
    Serial.println("ESQUERDA!");
    acenderLed(ledEsqueda);
  }
}
