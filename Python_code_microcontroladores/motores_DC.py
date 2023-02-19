"""
Autor: Roberto Rico Sandoval.
Fille: Programación del movimiento mecánico de un motor DC con lenguaje Python.
Date: 11/ 02/ 2023
"""

from gpiozero import OutputDevice
from gpiozero import PWMOutputDevice
from time import sleep

# Creación de objetos OutputDevice (Salidas).
pinA = OutputDevice(2)
pinB = OutputDevice(3)

# Creación de objetos PWMOutputDevice (Entradas de alimentación).
pinE = PWMOutputDevice(4)

while True:

    for i in range(1, 11):

        speed = i / 10
        print(speed)

        pinA.on()
        pinB.off()

        pinE.value = speed
        sleep(0.5)
    
    pinA.off()
    sleep(2)

    for j in range(1, 11):

        speed = j / 10
        print(speed)

        pinA.off()
        pinB.on()

        pinE.value = speed
        sleep(0.5)
    
    pinB.off()
    sleep(2)

