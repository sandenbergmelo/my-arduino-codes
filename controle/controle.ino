const int pinoFototransistor = A2; //PINO ANALÓGICO UTILIZADO PELO FOTOTRANSISTOR
const int led = 13;

int state = LOW;

void setup(){
  Serial.begin(9600); //INICIALIZAÇÃO DA SERIAL
  pinMode(pinoFototransistor, INPUT); //DEFINE O PINO COMO ENTRADA
  pinMode(led, OUTPUT);
}

void loop(){
  if(analogRead(pinoFototransistor) < 200){ //SE A LEITURA DO PINO FOR MENOR QUE 800 BITS, FAZ
    state = !state;
    delay(30);
  }

  digitalWrite(led, state);
 }
