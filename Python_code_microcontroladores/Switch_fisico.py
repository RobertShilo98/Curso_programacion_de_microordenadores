"""
Autor: Roberto Rico Sandoval.
Fille: Programación de Switch físico.
Date: 18/ 01/ 2023
"""

from gpiozero import LED, Button
from time import sleep

led1 = LED(17)
boton1 = Button(2)

while True:
    boton1.wait_for_press()
    led1.toggle()
    sleep(0.5)

    boton1.when_pressed = led1.on()
    boton1.when_released = led1.off()

