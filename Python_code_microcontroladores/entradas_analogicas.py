"""
Autor: Roberto Rico Sandoval.
Fille: Entradas analógicas en microordenador por lenguaje Python.
Date: 11/ 02/ 2023
"""

from gpiozero import MCP3008
from gpiozero import PWMLED
from time import sleep

# Creación de objeto potenciometro.
pot = MCP3008(0)

# Creación de objeto led.
led = PWMLED(21)

led.source = pot.value

while True:

    print(pot.value)
    sleep(1)

