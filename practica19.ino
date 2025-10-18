#include "LedControl.h"
LedControl matrizLed=LedControl(12,11,10,1);
void setup() {
Serial.begin(9600);
matrizLed.shutdown(0,false);
matrizLed.setIntensity(0,4);
matrizLed.clearDisplay(0);
}
void loop(){
for(int fila = 0; fila < 8; fila++) {
Serial.print(fila);
Serial.println("------");
for(int columna = 0; columna < 8; columna++) {
Serial.println(columna);
matrizLed.setLed(0,fila,columna,true);
delay(100);
matrizLed.setLed(0,fila,columna,false);
delay(100);
}
}
}
