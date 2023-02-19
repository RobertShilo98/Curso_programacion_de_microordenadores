"""
Autor: Roberto Rico Sandoval.
Fille: Sensor de movimiento PIR programado con Python gpiozero.
Date: 11/ 02/ 2023
"""

from gpiozero import MotionSensor

#Creación de objeto PIR.
pir = MotionSensor(4)

while True:

    pir.wait_for_active()
    print("Se ha detectado movimiento.")
    pir.wait_for_inactive()
    print("Se ha dejado de detectar movimiento.")

