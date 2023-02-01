
//Desenvolvido por: Prô Rodrigo Terra
//MakerZine - www.makerzine.com.br
//14 de abril de 2020
#include <Servo.h>
int pinoLed = 13;
int pinoSensorLuz = A0;
int valorLuz = 0;
Servo meuServoMotor;
void setup() {
  pinMode(pinoLed, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  valorLuz = analogRead(pinoSensorLuz); // Faz a leitura do sensor e armazena o valor na variável "valorLuz"
  Serial.println(valorLuz); // Mostra no visor serial o valor medido pelo sensor luminoso
  meuServoMotor.attach(9);
  if (valorLuz < 400)
  {
    for(int angulo=30; angulo<=70; angulo++) { // Aqui o ângulo do eixo do servo motor irá aumentar,
      meuServoMotor.write(angulo); //o que significa que seu digitador ira abaixar.
      delay(1);
    }
    for(int angulo=70; angulo>=30; angulo--) { // Aqui o ângulo do eixo do servo motor irá diminuir
      meuServoMotor.write(angulo); //o que significa que seu digitador ira voltar para a posição inicial.
      delay(1);
    }
    delay(10);
  }
  else {
    digitalWrite(pinoLed, HIGH); // Não tem função, coloquei apenas para verificar a condição
  } // do if ser negativo.
}
