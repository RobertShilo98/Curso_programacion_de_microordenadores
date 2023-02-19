"""
Autor: Roberto Rico Sandoval.
Fille: Pines de proposito general GPIO.
Date: 17/ 01/ 2023
"""

from gpiozero import LED
from time import sleep

led = LED(17)

while True:
    
    led.on()
    sleep(1)
    led.off()
    sleep(1)

