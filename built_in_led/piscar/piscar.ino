const int led = 12;
int velocidade = 700;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);

  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(velocidade);
  digitalWrite(led, LOW);
  delay(velocidade);
}
