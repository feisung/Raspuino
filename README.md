Raspuino
========

When you mix the Raspberry Pi and Arduino via USB you get Raspuino! a Robobo offering like Hello World for serial communication via http web interface to the Arduino
This is the Raspuino (Raspberry Pi Arduino code)

This is a hello Arduino from Raspberry Pi )or any Linux computer running Python


In summary, the code enables a user to plug in the Arduino via USB to the Raspberry Pi and using a web Interface, they are able to control the functions within the Arduino code.

The server.py code should be run with Python and it should initiate a serial communication with the port where the Arduino is attached to. The server initiates on localhost:8080 and can be changed to your liking.

Index.html communicates with the python server code via http post and requests.

#--------------------------------------------------------------------------------------
- Credits: -
- #Code Based partly on Ken Shirriff's Project (http://arcfn.com) -
- Modified and Repurposed by: Fei Manheche -
- September 2012 -
- -
- The code is offered as is with no implied or direct fit for purpose under -
- Apache v2 Licence which can be found on: -
- http://www.apache.org/licenses/LICENSE-2.0.html -
---------------------------------------------------------------------------------------#

#**************************************************************************************
* USAGE *
**************************************************************************************#

1) Upload the Arduino sketch (Arduino_Code directory) to the Arduino
2) Make sure you setup Arduino IDE on the Raspberry Pi just in case you are unable to communicate
2.1) You are able to test the code via serial debug from Arduino IDE

3) Start the python server by issuing $python server.py on command line if using Linux

4) Go to the Web browser and point it to localhost:8080 and enjoy! 