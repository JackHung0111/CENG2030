int green = 2; // this number indicates the pin number of the Arduino board
int yellow = 3;
int red = 4;
int Pgreen = 5;
int Pred = 6;
void setup() {
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(Pgreen, OUTPUT);
  pinMode(Pred, OUTPUT);
}
void loop() {
 // add FSM by calling state sub-routines here
 state_1();
 state_2();
 state_3();
 state_4();
}
void state_1() { // definition of State 1
 // add codes here to light up the LEDs and provide time delays
 digitalWrite(red, HIGH);
 digitalWrite(yellow, LOW);
 digitalWrite(green, LOW);
 digitalWrite(Pred, LOW);
 digitalWrite(Pgreen, HIGH);
 delay(5000);
}
// add more states here 
void state_2() { // definition of State 2
 // add codes here to light up the LEDs and provide time delays
 digitalWrite(red, HIGH);
 digitalWrite(yellow, HIGH);
 digitalWrite(green, LOW);
 digitalWrite(Pred, LOW);
 for (int i = 0; i < 3; i++){
  digitalWrite(Pgreen, HIGH);
  delay(500);
  digitalWrite(Pgreen, LOW);
  delay(500);
 }
}
void state_3() { // definition of State 3
 // add codes here to light up the LEDs and provide time delays
 digitalWrite(red, LOW);
 digitalWrite(yellow, LOW);
 digitalWrite(green, HIGH);
  digitalWrite(Pred, HIGH);
 digitalWrite(Pgreen, LOW);
 delay(5000);
}
void state_4() { // definition of State 4
 // add codes here to light up the LEDs and provide time delays
 digitalWrite(red, LOW);
 digitalWrite(yellow, HIGH);
 digitalWrite(green, LOW);
  digitalWrite(Pred, HIGH);
 digitalWrite(Pgreen, LOW);
 delay(3000);
}
