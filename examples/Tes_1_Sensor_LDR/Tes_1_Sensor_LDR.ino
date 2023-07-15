#include "LDR.h"
LDR ldr1(A0);

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println(String() + "LDR1: " + ldr1.getValue());
  delay(500);
}
