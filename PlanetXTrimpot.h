#ifndef _PlanetXTRIMPOT_H_
#define _PlanetXTRIMPOT_H_

#include "RJPins.h"

class PlanetXTrimpot
{
public:
  PlanetXTrimpot(RJPin pin);
  int read();

private:
  uint8_t _pin;
};

#endif
