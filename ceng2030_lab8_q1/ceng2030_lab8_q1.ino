int red = 13; // this number indicates the pin number of the Arduino board 
int ir  = 2; 

void setup() { 
  // set the input & output pins here 
  pinMode(ir,INPUT);
  pinMode(red,OUTPUT);
} 
  
  
void loop() { 
  // read the output digital signal from the IR sensor 
  // if an obstacle is detected, turn the red LED on 
  // if there is no obstacle, turn the red LED off 
  if(digitalRead(ir) == LOW)
    digitalWrite(red,LOW);
  else
    digitalWrite(red,HIGH); 
}
