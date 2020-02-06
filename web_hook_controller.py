from flask import Flask, request
try:
        from urllib.parse import urlparse
except ImportError:
         from urlparse import urlparse
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
    payload = request.get_data()
    payload = str(payload)
    print("payload {}".format(payload))
    matched = re.findall(r"(^\d*)([a-z]+$)",payload)
    print("match: {}".format(matched))
    if len(matched) != 0:
        out = matched[0][1]
        if len(matched[0][0]) > 0:
           out *= int(matched[0][0]) # string multiplication
        
        print("payload out {}".format(out))
        ser.write(payload)
        # f = open("/home/pi/clapper_wait.txt", 'w')
        # f.write(payload)
        # f.close()
        return("Success")
    else:
        return("No input")

port = os.environ['CLAPPER_PORT']
ip = os.environ['IP_ADDRESS']


app.run(host=ip, port=port)
