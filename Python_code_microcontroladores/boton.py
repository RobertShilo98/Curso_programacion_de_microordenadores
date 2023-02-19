"""
Autor: Roberto Rico Sandoval.
Fille: Botones de acción física.
Date: 17/ 01/ 2023
"""

from gpiozero import LED
from gpiozero import Button
from time import sleep

led = LED(17)
boton = Button(2)

boton.wait_for_active()
led.on()
sleep(3)
led.off()

