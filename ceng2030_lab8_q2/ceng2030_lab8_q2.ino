#include <Servo.h> 
Servo myservo;  // create servo object to control a servo 
int pos = 0;    // variable to store the servo position 
bool rotate = false;

int red = 13; // this number indicates the pin number of the Arduino board 
int ir  = 2; 

void setup() { 
  // set the input & output pins here 
  pinMode(ir,INPUT);
  pinMode(red,OUTPUT);
  myservo.attach(9);
  myservo.write(180);
} 
  
  
void loop() { 
  // read the output digital signal from the IR sensor 
  // if an obstacle is detected, turn the red LED on 
  // if there is no obstacle, turn the red LED off 
  if(digitalRead(ir) == LOW)
    digitalWrite(red,LOW);
  else{
    digitalWrite(red,HIGH); 
    if(rotate == false){
      for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees   // in steps of 1 degree     
        myservo.write(pos);  // tell servo to go to position in variable 'pos'     
        delay(15);           // waits 15ms for the servo to reach the position   
        }
        rotate = true;
      }
     else{
      for (pos = 180; pos >= 0; pos -= 1) {
        myservo.write(pos);  // tell servo to go to position in variable 'pos'     
        delay(15);   
      }
      rotate = false;
     }
  }
}
