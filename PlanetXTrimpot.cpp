#include "PlanetXTrimpot.h"

PlanetXTrimpot::PlanetXTrimpot(RJPin pin)
{
  _pin = pins[pin][0];
}

int PlanetXTrimpot::read()
{
  return analogRead(_pin);
}
