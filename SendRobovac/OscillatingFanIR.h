#include <avr/pgmspace.h>
// PROGMEM modifier is used to store data into flash memeory instead of ram which is much more limited
// https://www.arduino.cc/reference/en/language/variables/utilities/progmem/

#define ON_OFF_RAW_DATA_LEN 100
const uint16_t ON_OFF[ON_OFF_RAW_DATA_LEN] PROGMEM ={
  1234, 482, 1202, 486, 366, 1318, 1206, 482, 
  1206, 482, 370, 1318, 370, 1290, 386, 1298, 
  390, 1294, 394, 1294, 394, 1290, 1238, 7350, 
  1234, 482, 1206, 482, 366, 1318, 1206, 482, 
  1206, 482, 370, 1318, 358, 1326, 362, 1298, 
  390, 1322, 366, 1318, 370, 1318, 1210, 7346, 
  1238, 478, 1210, 478, 358, 1326, 1214, 474, 
  1214, 474, 362, 1326, 362, 1322, 366, 1318, 
  370, 1290, 390, 1298, 390, 1322, 1214, 7342, 
  1242, 474, 1214, 474, 366, 1318, 1206, 482, 
  1206, 482, 366, 1322, 366, 1318, 362, 1326, 
  362, 1322, 366, 1294, 394, 1290, 1234, 7350, 
  1234, 482, 1206, 1000};

// SPEED
#define SPEED_RAW_DATA_LEN 24
const uint16_t SPEED[SPEED_RAW_DATA_LEN] PROGMEM ={
  1234, 454, 1234, 454, 394, 1294, 1234, 454, 
  1234, 454, 394, 1290, 398, 1290, 386, 1298, 
  390, 1298, 390, 1294, 1242, 446, 394, 1000};


//Oscillate
#define OSC_RAW_DATA_LEN 24
const uint16_t OSC[OSC_RAW_DATA_LEN] PROGMEM ={
  1242, 446, 1242, 446, 390, 1294, 1234, 454, 
  1234, 454, 394, 1294, 394, 1294, 1234, 450, 
  398, 1290, 386, 1298, 390, 1298, 390, 1000};

// Timer
#define TIMER_RAW_DATA_LEN 24
const uint16_t TIMER[TIMER_RAW_DATA_LEN] PROGMEM ={
  1242, 446, 1242, 446, 394, 1294, 1234, 454, 
  1242, 446, 394, 1294, 394, 1290, 398, 1290, 
1234, 454, 386, 1298, 390, 1298, 390, 1000};
