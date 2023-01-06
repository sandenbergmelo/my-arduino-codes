const int led = 10;
int intensidade = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  for (intensidade = 0; intensidade <= 255; intensidade += 5) {
    analogWrite(led, intensidade);
    delay(20);
  }
  for (intensidade = 255; intensidade >= 0; intensidade -= 5) {
    analogWrite(led, intensidade);
    delay(20);
  }
}
