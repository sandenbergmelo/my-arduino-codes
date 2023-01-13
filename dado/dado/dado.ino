// LEDs Vermelhos
const int v1 = 2;
const int v2 = 3;
const int v3 = 4;

// LEDs Azuis
const int a1 = 5;
const int a2 = 6;
const int a3 = 7;

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(0));

  pinMode(v1, OUTPUT);
  pinMode(v2, OUTPUT);
  pinMode(v3, OUTPUT);
  pinMode(a1, OUTPUT);
  pinMode(a2, OUTPUT);
  pinMode(a3, OUTPUT);
}

void acenderTodos() {
  digitalWrite(v1, HIGH);
  digitalWrite(v2, HIGH);
  digitalWrite(v3, HIGH);
  digitalWrite(a1, HIGH);
  digitalWrite(a2, HIGH);
  digitalWrite(a3, HIGH);
}

void apagarTodos() {
  digitalWrite(v1, LOW);
  digitalWrite(v2, LOW);
  digitalWrite(v3, LOW);
  digitalWrite(a1, LOW);
  digitalWrite(a2, LOW);
  digitalWrite(a3, LOW);
}

void loop() {
  apagarTodos();

  digitalWrite(v1, HIGH);
  delay(300);
  digitalWrite(v2, HIGH);
  digitalWrite(v1, LOW);
  delay(300);
  digitalWrite(v2, LOW);
  digitalWrite(v3, HIGH);
  delay(300);
  digitalWrite(v3, LOW);
  digitalWrite(a3, HIGH);
  delay(300);
  digitalWrite(a3, LOW);
  digitalWrite(a2, HIGH);
  delay(300);
  digitalWrite(a2, LOW);
  digitalWrite(a1, HIGH);
  delay(300);
  digitalWrite(a1, LOW);

  acenderTodos();
  delay(1000);
  apagarTodos();
  delay(50);

  int numero = random(1, 7);
  
  Serial.print("Número sorteado: ");
  Serial.println(numero);

  if (numero == 1) {
    digitalWrite(v2, HIGH);
  }
  else if (numero == 2) {
    digitalWrite(v2, HIGH);
    digitalWrite(a2, HIGH);
  }
  else if (numero == 3) {
    digitalWrite(v2, HIGH);
    digitalWrite(a1, HIGH);
    digitalWrite(a3, HIGH);
  }
  else if (numero == 4) {
    digitalWrite(v1, HIGH);
    digitalWrite(v3, HIGH);
    digitalWrite(a1, HIGH);
    digitalWrite(a3, HIGH);
  }
  else if (numero == 5) {
    acenderTodos();
    digitalWrite(a2, LOW);
  }
  else if (numero == 6) {
    acenderTodos();
  }
  else {
    while (true) {
      Serial.println("ERRO!");
      digitalWrite(v1, HIGH);
      digitalWrite(v2, HIGH);
      digitalWrite(v3, HIGH);
      delay(1000);
      digitalWrite(v1, LOW);
      digitalWrite(v2, LOW);
      digitalWrite(v3, LOW);
      delay(1000);
    }
  }

  delay(10000);

}