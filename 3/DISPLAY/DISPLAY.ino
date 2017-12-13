#include <SevSeg.h>

SevSeg sevseg;

void setup() {
  byte numDigits = 4; 
  byte digitPins[] = {10, 11, 12, 13};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
  
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins); 
  sevseg.setBrightness(90);
  sevseg.setNumber(7331, 1);
}

void loop() {
 sevseg.refreshDisplay();
}
