#include <Servo.h>

Servo myservo;
const int btn = 2;


void setup() {
  pinMode(btn, INPUT_PULLUP);
  myservo.attach(3);
}

void loop() {
  int pressed = !digitalRead(btn);

  if (pressed) {
    myservo.write(180);
    delay(500);
    myservo.write(0);
    Se
  }

  delay(300);

}
