/*
Autor: Roberto Rico Sandoval.
Fille: Sensor LDR.
Date: 18/ 02/ 2023
*/

const int ldr = A1;
int valorLDR = 0;
int ledA = 2;
int valorMapa = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ldr, OUTPUT);
  pinMode(ledA, OUTPUT);
}

void loop()
{
  valorLDR = analogRead(ldr);
  valorMapa = valorLDR;
  
  digitalWrite(ledA, valorMapa);
  
  Serial.print("\n\nValor del sensor: ");
  Serial.print(valorLDR);
  delay(1000);
  
  Serial.print("\n\nValor del led: ");
  Serial.print(valorMapa);
  delay(1000);
}

