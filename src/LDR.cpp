#include "LDR.h"
#include "Arduino.h"

LDR::LDR(byte _pinLdr) {
  pinLdr = _pinLdr;
}

int LDR::getValue(){
  int nilaiLdr = analogRead(pinLdr);
  return nilaiLdr;
}
