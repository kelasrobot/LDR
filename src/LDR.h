#ifndef LDR_h
#define LDR_h
#include "Arduino.h"

class LDR {
  private:
    byte pinLdr;
  public:
    LDR(byte _pinLdr);
    int getValue();
};

#endif