const int velocidade = 700;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(velocidade);
  digitalWrite(LED_BUILTIN, LOW);
  delay(velocidade);
}
