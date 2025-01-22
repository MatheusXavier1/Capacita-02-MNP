#include <Arduino.h>

void setup() {
/*Aqui você irá inicializar as entradas e 
saídas utilizadas no projeto*/

Serial.begin(9600); //Inicia o monitor serial
pinMode(9, OUTPUT); //Pino 9 como saída
pinMode(10, INPUT); //Pino 10 como entrada
Serial.println("Hello, World!"); //Imprime a mensagem no monitor serial
}

void loop() {

  /*Aqui seu código ficará rodando em Loop, até que o 
  microcontrolador seja resetado ou desligado*/

  digitalWrite(9, HIGH); //Aciona o pino 9 em nivel alto
  delay(1000); //Aguarda 1 segundo;
  delayMicroseconds(500); //Aguarda 500 microsegundos
  digitalWrite(9, LOW); //Aciona o pino 9 em nivel baixo

  int PinoDig = digitalRead(10); //Lê o valor do pino 10

  int PinoAnalog = analogRead(A0); //Lê o valor do pino A0

  analogWrite(PinoAnalog, 255); //Escreve o valor 255 no pino A0
}

