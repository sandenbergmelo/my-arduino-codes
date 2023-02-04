const int led = 8;
const int sensor = 9;

int state = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop() {
  if (digitalRead(sensor)) {
    state = !state;
    delay(30);
  }

  digitalWrite(led, state);
}
