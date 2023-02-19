/*
Autor: Roberto Rico Sandoval.
Fille: Comunicación serial en Python.
Date: 11/ 02/ 2023
*/

int led1 = 2;
char estadoLED;


void setup()
{
  pinMode(led1, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0){
  	
    estadoLED = Serial.read();
  }
  
  if (estadoLED == 'h' || estadoLED == 'H'){
  	
    digitalWrite(led1, HIGH);
    Serial.println("LED ON");
    delay(1000);
  }
  
  else if (estadoLED == 'l' || estadoLED == 'L'){
  	
    digitalWrite(led1, LOW);
    Serial.println("LED OFF");
    delay(1000);
  }
  
}

