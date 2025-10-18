const int Z=2;
const int Y=A1;
const int X=A0;

void setup(){
pinMode(Z,INPUT);
digitalWrite(Z,HIGH);
Serial.begin(9600);
}

void loop()
{
  Serial.print("Boton: ");
  Serial.print(digitalRead(Z));
  Serial.println();
  Serial.print("Eje X: ");
  Serial.print(analogRead(X));
  Serial.println();
  Serial.print("Eje Y: ");
  Serial.print(analogRead(Y));
  Serial.println();
  delay(2000);
}
