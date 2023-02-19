/*
Autor: Roberto Rico Sandoval.
Fille: Botones de acción física.
Date: 18/ 01/ 2023
*/

int led1 = 8;
int led2 = 9;
int led3 = 10;
int led4 = 11;
int led5 = 12;

int boton1 = 2;
int boton2 = 3;

int pulso1 = 0;
int pulso2 = 0;

int tiempo = 100;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  
  pinMode(boton1, INPUT);
  pinMode(boton2, INPUT);
}

void loop()
{
  pulso1 = digitalRead(boton1);
  pulso2 = digitalRead(boton2);
  
  if(pulso1 == 0){
  
    for(int i = 8; i <= 12; i++){
    
      digitalWrite(i, HIGH);
      delay(tiempo);
      digitalWrite(i, LOW);
      delay(tiempo);
    }
  }
  
  if(pulso2 == 1){
  
    for(int j = 12; j >= 8; j--){
    
      digitalWrite(j, HIGH);
      delay(tiempo);
      digitalWrite(j, LOW);
      delay(tiempo);
    }
  }
}

