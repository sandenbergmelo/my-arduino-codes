const int led = 9;
const int sensor = 8;

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
