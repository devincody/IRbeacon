from flask import Flask, request
from urllib.parse import unquote_plus
import os
import json
import re
import serial
ser = serial.Serial('/dev/ttyAMA0')
ser.baudrate = 9600

app = Flask(__name__)

def parse_request(req):
    """
    Parses application/json request body data into a Python dictionary
    """
    payload = float(req.get_data())
    return payload

@app.route('/robovac/', methods = ['POST'])
def index():
    payload = str(float(request.get_data()))
    print("payload {}".format(float(payload)))
    ser.write(payload)
    # f = open("/home/pi/clapper_wait.txt", 'w')
    # f.write(payload)
    # f.close()
    return("Success")

port = os.environ['CLAPPER_PORT']
ip = os.environ['IP_ADDRESS']


app.run(host=ip, port=port)
