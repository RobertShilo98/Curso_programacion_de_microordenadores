"""
Autor: Roberto Rico Sandoval.
Fille: Establecer conexión con app de flask.
Date: 19/ 01/ 2023
"""

from flask import Flask

app = Flask(__name__)

@app.route('/')

def index():
    return "Hola mundo -- Se estableció conexión con Flask."

if __name__ == '__main__':
    app.run(debug = True, host = '0.0.0.0')

