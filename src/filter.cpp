#include <Arduino.h>
#include "filter.h"

uint8_t FilterRssi::meanRssi(int recRssi){
  counter++;
  addRssi += recRssi;
  if(recRssi >= maxVal){
    maxVal = recRssi;
  }
  if(counter == 5){
    uint8_t meanRssi = 0;
    addRssi = (addRssi-maxVal) >> 2; // entspricht geteilt durch 4
    meanRssi = addRssi & 0xff;
    counter = 0;
    addRssi = 0;
    maxVal = 0;
    return meanRssi;
  }
  return 0;
}