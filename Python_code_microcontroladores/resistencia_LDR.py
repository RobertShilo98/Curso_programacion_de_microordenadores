"""
Autor: Roberto Rico Sandoval.
Fille: Resistencia por intencidad de luminicencia LDR.
Date: 11/ 02/ 2023
"""

from gpiozero import LightSensor

# Creación de objeto LDR.
ldr = LightSensor(4)

while True:

    print(ldr.value)

