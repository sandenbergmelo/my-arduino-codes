const int speakPin = 12;
const int buttonPin = 13;
const int Qnote = 441.1;
const int Hnote = Qnote*2;
const int Wnote = Qnote*4;
const int Enote = Qnote/2;
const int Snote = Qnote/4;
const int b4b = 466;
const int b4 = 494;
const int c5 = 523;
const int c5s = 554;
const int d5 = 587;
const int d5s = 622;
const int e5 = 659;
const int f5 = 699;
const int f5s = 740;
const int g5 = 784;
const int g5s = 831;
const int a5 = 880;
const int a5s = 932;
const int b5 = 988;
const int c6 = 1047;
const int c6s = 1109;
const int d6 = 1175;
const int d6s = 1245;
const int e6 = 1319;
const int f6 = 1397;
const int f6s = 1480;
const int g6 = 1568;
const int g6s = 1661;
const int a6 = 1760;
const int a6s = 1865;
const int b6 = 1976;
const int c7 = 1093;
const int c7s = 2217;
const int d7 = 2349;

void setup(){
  pinMode(speakPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

void loop(){
  int pressed = !digitalRead(buttonPin);

  if (pressed) {
    tone(speakPin, f5s);
    delay(Qnote+Enote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, d5);
    delay(Hnote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, d5);
    delay(Snote);
    noTone(speakPin);
    delay(12);
  
    tone(speakPin, e5);
    delay(Snote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, f5);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, e5);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, d5);
    delay(Enote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, c5s);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, d5);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, e5);
    delay(Enote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, f5s);
    delay(Qnote+Enote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, b5);
    delay(Qnote+Enote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, b4);
    delay(Enote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, c5s);
    delay(Enote);
    noTone(speakPin);
    delay(50);
  
    tone(speakPin, d5);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, e5);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, d5);
    delay(Enote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, c5s);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, a5);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);
  
    tone(speakPin, g5);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f6s);
    delay(Qnote+Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d6);
    delay(Hnote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, d6);
    delay(Snote);
    noTone(speakPin);
    delay(12.5);

    tone(speakPin, e6);
    delay(Snote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f6);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e6);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d6);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, c6s);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d6);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, e6);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, f6s);
    delay(Qnote+Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, b6);
    delay(Qnote+Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, b6);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, c7s);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d7);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, g6);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, f6s);
    delay(Enote);
    noTone(speakPin);
    delay(50);

    tone(speakPin, f6);
    delay(Snote+Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, d7);
    delay(Enote+Snote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, a6s);
    delay(Enote);
    noTone(speakPin);
    delay(25);

    tone(speakPin, b6);
    delay(Qnote);
    noTone(speakPin);
    delay(300);
  }
}

  