#include <Servo.h>

Servo myservo[13];

void setup() {
  
  for (int i=0;i<13;i++){
    myservo[i].attach(i);
  }
  
}

void loop() {
  
  for (int i=0;i<13;i++){
    myservo[i].write(90);
  }
  
}
