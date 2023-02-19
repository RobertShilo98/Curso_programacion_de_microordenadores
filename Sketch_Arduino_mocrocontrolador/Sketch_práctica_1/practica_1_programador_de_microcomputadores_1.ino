/*
Autor: Roberto Rico Sandoval.
Fille: Práctica 1 (Programación de microcomputadores).
Date: 19/ 01/ 2023
*/

int boton1 = 2;
int boton2 = 3;

int led1 = 8;
int led2 = 9;

int pulso1 = 0;
int pulso2 = 0;

int pausa = 300;

void setup()
{
  Serial.begin(9600);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
}

void loop()
{
  pulso1 = digitalRead(boton1);
  pulso2 = digitalRead(boton2);
  
  if(pulso1 == 1){
  
    Serial.println("Verde ON\nRojo OFF\n");
    digitalWrite(led1, HIGH);
    delay(pausa);
    digitalWrite(led1, LOW);
    delay(pausa);
  }
  
  if(pulso2 == 0){
  
    Serial.println("Rojo ON\nVerdo OFF\n");
    digitalWrite(led2, HIGH);
    delay(pausa);
    digitalWrite(led2, LOW);
    delay(pausa);
  }
}

