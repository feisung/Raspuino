/*
  This is a Hello Raspuino code for serial communication to the Arduino via the Raspberry Pi
 
 Revised and written by Fei Manheche of Robobo Inc., (C) 2012 
 This code is offered unde the APACHE License v.2
 more information at: http://www.apache.org/licenses/LICENSE-2.0.html
 
 This code is to be used in conjuction with the python server and index.html code provided together
 questios or any other contact to team@robobo.org
 
 The Arduino is connected via USB to the Rasberry Pi or computer and serial communication occurs
 
 */

const int LED = 13;      // the LED pin 

void setup()
{
  // initialize the serial communication, make sure it matched with the Baud rate on the server.py code:
  Serial.begin(9600);
  
   // prints title with ending line break 
  Serial.println("Fei's Serial debugger"); 
  
  Serial.println("Available commands: l = ON; m = OFF LED"); 
  // initialize the output pins:
  pinMode(LED, OUTPUT);

}


void loop() {
  char c;

  c = Serial.read();
  
  
  switch(c){
    //the character code matches what is sent from the server.py code
    case 'l' :
      digitalWrite(LED, HIGH);
      Serial.println("The LED Has been Switched ON"); //for debug
      
      
      break;
    case 'm':
      digitalWrite(LED, LOW);
      Serial.println("The LED Has been Switched OFF"); //for debug
      
      break;

  }
}

