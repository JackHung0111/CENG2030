#include <Servo.h> 
#define DEAD_BAND 400 // dead-band = 400

Servo myservo;  // create servo object to control a servo 
int pos = 0;    // variable to store the servo position 

int left = A4;
int right = A5; 

void setup() { 
  // set the input & output pins here 
  pinMode(left,INPUT);
  pinMode(right,INPUT);
  myservo.attach(11);
} 
  
void loop() { 
  // Read both left and right sensor values
  int left_value = analogRead(left);
  int right_value = analogRead(right);         
  
  // Read current survo position
  pos = myservo.read();

  // Compare values
  if(left_value > right_value){ // Left stronger
    int diff = left_value - right_value;
    if (left_value > DEAD_BAND && diff > 100){
      if(pos < 180){
        myservo.write(pos + 1);
      }
      delay(20);
    }
  }
  else if(right_value > left_value){
    int diff = right_value - left_value;
    if(right_value > DEAD_BAND && diff > 100){
      if(pos > 0){
        myservo.write(pos - 1);
      }
      delay(20);
    }
  }
}
