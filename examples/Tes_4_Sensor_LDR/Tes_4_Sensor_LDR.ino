#include "LDR.h"
LDR ldr1(A0);
LDR ldr2(A1);
LDR ldr3(A2);
LDR ldr4(A3);

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println(String() + "LDR1: " + ldr1.getValue());
  Serial.println(String() + "LDR2: " + ldr2.getValue());
  Serial.println(String() + "LDR3: " + ldr3.getValue());
  Serial.println(String() + "LDR4: " + ldr4.getValue());
  Serial.println();
  delay(500);
}
