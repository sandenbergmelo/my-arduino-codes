const int led = 2;
const int btn = 3;
const int buzzer = 4;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(btn, INPUT_PULLUP);
}

int state = LOW;

void loop() {
  int pressed = !digitalRead(btn);

  if (pressed) {
    state = !state;

    digitalWrite(buzzer, HIGH);
    delay(100);
    digitalWrite(buzzer, LOW);
    delay(300);
  }

  digitalWrite(led, state);
}
