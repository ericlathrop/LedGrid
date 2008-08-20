
#ifndef __PATTERN_H
#define __PATTERN_H

#define NUM_ROWS 7
#define NUM_COLS 5

#include <avr/pgmspace.h>

typedef prog_uchar patternp[NUM_ROWS][NUM_COLS]; // stored in progmem
typedef uint8_t pattern[NUM_ROWS][NUM_COLS];

extern pattern screen;

void setPattern(const patternp * p);
void setInversePattern(const patternp * p);
void scrollPattern(const patternp * start, const patternp * end, unsigned int milliseconds, unsigned int gap, unsigned int finish);
const patternp * getPattern(unsigned char c);
void scrollString(const char * s, unsigned int millisecondsPerChar, unsigned int gap);


const patternp PATTERN_BLANK PROGMEM = {
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
};

const patternp PATTERN_SOLID PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
};

const patternp PATTERN_DARWINIAN PROGMEM = {
  { 0, 0, 1, 0, 0 },
  { 1, 1, 1, 1, 1 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 1, 1, 1, 0 },
  { 0, 1, 0, 1, 0 },
  { 0, 1, 0, 1, 0 },
};

const patternp PATTERN_HEART PROGMEM = {
  { 0, 0, 0, 0, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 0, 1, 1, 1, 0 },
  { 0, 1, 1, 1, 0 },
  { 0, 0, 1, 0, 0 },
};

const patternp PATTERN_EXCLAMATION PROGMEM = {
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
  { 0, 0, 0, 0, 0 },
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
};


const patternp PATTERN_A PROGMEM = {
  { 0, 0, 1, 0, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
};

const patternp PATTERN_B PROGMEM = {
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 0 },
};

const patternp PATTERN_C PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_D PROGMEM = {
  { 1, 1, 1, 0, 0 },
  { 1, 0, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 1, 0 },
  { 1, 1, 1, 0, 0 },
};

const patternp PATTERN_E PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const patternp PATTERN_F PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
};

const patternp PATTERN_G PROGMEM = {
  { 0, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 1, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 1 },
};


const patternp PATTERN_H PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 }
};

const patternp PATTERN_I PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const patternp PATTERN_J PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 0, 1, 0 },
  { 1, 0, 0, 1, 0 },
  { 0, 1, 1, 0, 0 },
};

const patternp PATTERN_K PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 1, 0 },
  { 1, 0, 1, 0, 0 },
  { 1, 1, 0, 0, 0 },
  { 1, 0, 1, 0, 0 },
  { 1, 0, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
};

const patternp PATTERN_L PROGMEM = {
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const patternp PATTERN_M PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
};

const patternp PATTERN_N PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 1, 0, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 0, 1, 1 },
  { 1, 0, 0, 0, 1 },
};

const patternp PATTERN_O PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 }
};

const patternp PATTERN_P PROGMEM = {
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
};

const patternp PATTERN_Q PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
  { 0, 0, 0, 1, 1 },
};

const patternp PATTERN_R PROGMEM = {
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
};

const patternp PATTERN_S PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 0 },
  { 0, 1, 1, 1, 0 },
  { 0, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_T PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
};

const patternp PATTERN_U PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 }
};

const patternp PATTERN_V PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 0, 1, 0 },
  { 0, 1, 0, 1, 0 },
  { 0, 0, 1, 0, 0 }
};

const patternp PATTERN_W PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 0, 1, 0, 1, 0 },
};

const patternp PATTERN_X PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 }
};

const patternp PATTERN_Y PROGMEM = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 }
};

const patternp PATTERN_Z PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 1 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const patternp PATTERN_1 PROGMEM = {
  { 0, 0, 1, 0, 0 },
  { 1, 1, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 1, 1, 1, 1, 1 },
};

const patternp PATTERN_2 PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 0, 0, 0, 0, 1 },
  { 0, 0, 1, 1, 0 },
  { 0, 1, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 },
};

const patternp PATTERN_3 PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 0, 0, 0, 0, 1 },
  { 0, 0, 1, 1, 0 },
  { 0, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_4 PROGMEM = {
  { 0, 0, 0, 1, 0 },
  { 0, 0, 1, 1, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 0, 0, 1, 0 },
  { 1, 1, 1, 1, 1 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 0, 1, 0 },
};

const patternp PATTERN_5 PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 0 },
  { 0, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_6 PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_7 PROGMEM = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 1 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
};

const patternp PATTERN_8 PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_9 PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const patternp PATTERN_0 PROGMEM = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 1, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};


#endif
