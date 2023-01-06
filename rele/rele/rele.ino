void setup() {
  pinMode(12, OUTPUT);
  pinMode(12, INPUT_PULLUP);

}

void loop() {
  digitalWrite(12, HIGH);
  delay(1000);
  digitalWrite(12, LOW);
  delay(1000);
}
