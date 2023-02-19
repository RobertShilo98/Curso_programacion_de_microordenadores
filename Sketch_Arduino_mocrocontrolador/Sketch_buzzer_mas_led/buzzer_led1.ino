/*
Autor: Roberto Rico Sandoval.
Fille: Buzzer con led.
Date: 18/ 02/ 2023
*/

int ledR = 3;
int ledV = 4;
int bocina = 2;

void setup()
{
  Serial.begin(9600);
  
  pinMode(ledR, OUTPUT);
  pinMode(ledV, OUTPUT);
  pinMode(bocina, OUTPUT);
}

void loop()
{
  // Encendido de pinzon.
  Serial.println("Pinzon ON");
  
  digitalWrite(ledR, LOW);
  digitalWrite(ledV, HIGH);
  tone(bocina, 220);
  delay(1000);
  tone(bocina, 170);
  delay(1000);
  tone(bocina, 130);
  delay(1000);
  
  // Encendido de led rojo (Pinzon off).
  Serial.println("Pinzon OFF");
  
  digitalWrite(ledR, HIGH);
  digitalWrite(ledV, LOW);
  noTone(bocina);
  delay(3000);
  
}

