#include <LowPower.h>


#define ledPin 13 

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  digitalWrite(ledPin, HIGH);  
  LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);                   
  digitalWrite(ledPin, LOW);    
  LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);  

}
