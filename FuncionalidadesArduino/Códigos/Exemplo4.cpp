#include <Arduino.h>

#define PINO_BRANCO 8
#define PINO_VERMELHO 9
#define PINO_AZUL 10
#define PINO_LARANJA 11
#define PINO_AMARELO 12
#define PINO_VERDE 13

#define TEMPO_DELAY 1000

void setup(){
  Serial.begin(9600); 

  pinMode(PINO_BRANCO, OUTPUT);
  pinMode(PINO_VERMELHO, OUTPUT);
  pinMode(PINO_AZUL, OUTPUT);
  pinMode(PINO_LARANJA, OUTPUT);
  pinMode(PINO_AMARELO, OUTPUT);
  pinMode(PINO_VERDE, OUTPUT);
}

void loop(){

  digitalWrite(PINO_BRANCO, HIGH);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_VERMELHO, HIGH);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_AZUL, HIGH);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_LARANJA, HIGH);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_AMARELO, HIGH);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_VERDE, HIGH);
  delay(TEMPO_DELAY);

  digitalWrite(PINO_VERDE, LOW);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_AMARELO, LOW);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_LARANJA, LOW);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_AZUL, LOW);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_VERMELHO, LOW);
  delay(TEMPO_DELAY);
  digitalWrite(PINO_BRANCO, LOW);
  delay(TEMPO_DELAY);
}
