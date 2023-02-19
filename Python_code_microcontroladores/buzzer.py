"""
Autor: Roberto Rico Sandoval.
Fille: Buzzer (Bocina).
Date: 11/ 02/ 2023
"""

from gpiozero import Buzzer
from time import sleep

# Creación de objeto Buzzer.
buzzer = Buzzer(17)

while True:

    buzzer.on()
    sleep(1)
    buzzer.off
    sleep(1)

