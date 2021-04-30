
const int ledPin = 13; // the number of the LED pin
const int IRpin = A0;
unsigned long current_time = 0;
int val = 0;
int count = 0;

void setup() {
    Serial.begin(9600);
    pinMode(ledPin, OUTPUT);
    pinMode(IRpin, INPUT);
}
void loop() {
    //Serial.println(time);
      val = analogRead(A0);
      //Serial.println(val);
      if(val>600){
        digitalWrite(ledPin, HIGH);
        count++;
        //Serial.println(millis());
        }
      else{
        digitalWrite(ledPin, LOW);
      }
      delay(100);
      if(millis() / 60000 > current_time){
        Serial.print("BPM:");
        Serial.println(count);
        count = 0;
        current_time = millis() / 60000;
      }
    //current_time = millis();
    //Serial.println(count);
    //count = 0;
    
} 
