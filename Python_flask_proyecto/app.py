"""
    Autor: Roberto Rico Sandoval.
    Fille: Aplicación en Python.
    Date: 09/ 02/ 2023
"""

from flask import Flask, render_template

app = Flask(__name__)

@app.route('/')

def index():

    return render_template('./index.html')

if __name__ == '__main__':

    app.run(debug = True, port = 8000, host = '0.0.0.0')

