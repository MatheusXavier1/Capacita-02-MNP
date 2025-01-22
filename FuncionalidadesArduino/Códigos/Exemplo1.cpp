#include <Arduino.h>

void setup(){
Serial.begin(9600);
}
void loop(){
for(int i = 0; i < 255; i++){
    analogWrite(9, i);
    delay(50);
    Serial.println(i);
    }

for(int c = 255; c > 0; c--){
    analogWrite(9, c);
    delay(50);
    Serial.println(c);
    }
}