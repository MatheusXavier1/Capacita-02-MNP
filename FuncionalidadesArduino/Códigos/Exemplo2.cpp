    #include <Arduino.h>

    void AumentaBrilho(int pino);
    void DiminuiBrilho(int pino);

    void setup(){

    Serial.begin(9600);

    }
    void loop(){
        AumentaBrilho(9);
        DiminuiBrilho(9);
    }

    void AumentaBrilho(int pino){
    for(int i = 0; i < 255; i++){
        analogWrite(9, i);
        delay(50);
        Serial.println(i);
        }
    }

    void DiminuiBrilho(int pino){
    for(int c = 255; c > 0; c--){
        analogWrite(9, c);
        delay(50);
        Serial.println(c);
        }
    }