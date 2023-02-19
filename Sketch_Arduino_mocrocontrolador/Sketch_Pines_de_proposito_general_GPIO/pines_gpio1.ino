/*
Autor: Roberto Rico Sandoval.
Fille: Pines de proposito general (GPIO).
Date: 17/ 01/ 2023
*/

int ledVerde = 2;

void setup()
{
  pinMode(ledVerde, OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, HIGH);
  delay(1000);
  digitalWrite(ledVerde, LOW);
  delay(1000);
}

