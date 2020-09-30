#include <String> //generic library

void setup() {
  // section to set up code
  Serial.begin(115200); //set buad rate for serial mointor 
  pinMode(5,OUTPUT); //IO 5 Output
  pinMode(18,OUTPUT); //IO 6 Output 
  pinMode(19,OUTPUT); //IO 7 Output
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<4; i++) { // to count and perform loop until i=4
    digitalWrite(5,HIGH); // turn on led 5
    delay(2000); // wait 2s
    digitalWrite(5,LOW); // turn off led 5
    //repeat same sequence for led 6,7
    digitalWrite(18,HIGH);
    delay(2000);
    digitalWrite(18,LOW);
    digitalWrite(19,HIGH);
    delay(2000);
    digitalWrite(19,LOW);  
  } //once 4 iterations are done turn on all 3 leds and wait 1s
   digitalWrite(5,HIGH);
   digitalWrite(18,HIGH);
   digitalWrite(19,HIGH);
   delay(1000);
   digitalWrite(5,LOW);
   digitalWrite(18,LOW);
   digitalWrite(19,LOW); 
   delay(1000);
}
