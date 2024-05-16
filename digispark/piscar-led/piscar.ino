const int led0 = 0;
const int led1 = 1;

void setup() {
  pinMode(led0, OUTPUT);
  pinMode(led1, OUTPUT);
}

void loop() {
  digitalWrite(led0, HIGH);
  digitalWrite(led1, HIGH);
  delay(1000);
  digitalWrite(led0, LOW);
  digitalWrite(led1, LOW);
  delay(1000);
}
