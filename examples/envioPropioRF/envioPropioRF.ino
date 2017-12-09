#include <RFControl.h>

int pinTransmision = 10;
long buckets[8] = { 2644, 396, 20968, 0,0,0,0,0};
char[36] compressTimings = {'0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','1','0','1','1','0','0','1','1','0','0','1','1','0','0','1','1','0','0','1','1','2'};
String compressTimings = "010101010101010101100110011001100112";
int repeticiones = 10;

void setup() {
  Serial.begin(9600);
  

}

void loop() {
  RFControl::sendByCompressedTimings(pinTransmision, buckets, compressTimings, repeticiones);

}
