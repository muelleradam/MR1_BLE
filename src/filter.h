#include <Arduino.h>

class FilterRssi{
  int counter = 0;
  int maxVal = 0;
  uint16_t addRssi = 0;
public:
  uint8_t meanRssi(int recRssi);
};