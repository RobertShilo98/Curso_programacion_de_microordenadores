"""
Autor: Roberto Rico Sandoval.
Fille: Practica 1 microcomputadores.
Date: 18/ 01/ 2023
"""
 
from gpiozero import LED, Button
from time import sleep

led = LED(17)

while True:

    led.on()
    sleep(1)

    led.off()
    sleep(1)

    led.on()
    sleep(5)
    
    led.off()
    sleep(5)

