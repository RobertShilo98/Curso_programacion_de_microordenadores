"""
Autor: Roberto Rico Sandoval.
Fille: Comunicación Serial de microordenadores programados en Python.
Date: 11/ 02/ 2023
"""

from time import sleep
import serial

micro = serial.Serial("./Sketch_Arduino_mocrocontrolador/Sketch_CM/comunicacion_serial.ino",9600)

while True:

    comando = input("Introduce un comando: ")
    micro.write(comando.encode())

    if comando == "h" or comando == "H":
        print("LED ON")

    elif comando == "o" or comando == "O":
        print("LED OFF")

    sleep(4)
    micro.close()

