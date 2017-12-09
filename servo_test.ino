#include <Servo.h>

Servo servomotor;
                 // z-axis (only on 3-axis models)

void setup() {
  // initialize the serial communications:
  Serial.begin(9600);
  servomotor.attach(9);
 
  //y=0;

  }
  void loop()
  {
 servomotor.write(135); 
  }

