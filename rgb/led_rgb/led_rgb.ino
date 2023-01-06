const int red = 9;
const int blue = 10;
const int green = 11;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  analogWrite(red, 0);
  analogWrite(blue, 255);
  analogWrite(green, 255);
}
