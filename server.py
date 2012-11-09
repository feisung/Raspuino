# Web server to Raspberry Pi Arduino gateway
# POST data is sent to the Arduino over the serial link
#
# Copyright 2012 Fei Manheche
# Based partly on Ken Shirriff's Project (http://arcfn.com)
# http://Robobo.org for more information and other projects
import cgi
import serial

from BaseHTTPServer import HTTPServer
from SimpleHTTPServer import SimpleHTTPRequestHandler

# The web server.
class MyHandler(SimpleHTTPRequestHandler):
  def do_POST(self):
    if self.path == '/arduino':
      form = cgi.FieldStorage(fp=self.rfile, headers=self.headers,
        environ={'REQUEST_METHOD':'POST'})
      code = form['code'].value
      print 'Sent:', code
      arduino.write(code)
      self.send_response(200)
      self.send_header('Content-type', 'text/html')
      return
    return self.do_GET()

# Choose the Arduino port according to your machine's assignment, use lsusb on Linux or anything else on other OSs
arduino = serial.Serial('/dev/ttyUSB0', 9600, timeout=2)
server = HTTPServer(('', 8080), MyHandler).serve_forever()
