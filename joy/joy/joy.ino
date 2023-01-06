const int pinSW = 2;
const int pinVRx = A1;
const int pinVRy = A2;


void setup() {
  pinMode(pinSW, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int valorVRx = analogRead(pinVRx);
  int valorVRy = analogRead(pinVRy);
  int pressedSW = digitalRead(pinSW);

  Serial.print("Valor VRx: ");
  Serial.println(valorVRx);
  Serial.print("Valor VRy: ");
  Serial.println(valorVRy);
  Serial.print("Status SW: ");
  Serial.println(pressedSW);

  delay(300);
}
