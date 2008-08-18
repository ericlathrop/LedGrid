
#ifndef __PATTERN_H
#define __PATTERN_H

#define NUM_ROWS 7
#define NUM_COLS 5

typedef unsigned char pattern[NUM_ROWS][NUM_COLS];

extern pattern screen;

void setPattern(const pattern p);
void setInversePattern(const pattern p);
void scrollPattern(const pattern start, const pattern end, unsigned int milliseconds, unsigned int gap, unsigned int finish);
const pattern * getPattern(unsigned char c);
void scrollString(const char * s, unsigned int millisecondsPerChar, unsigned int gap);


const pattern PATTERN_BLANK = {
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 0 },
};

const pattern PATTERN_DARWINIAN = {
  { 0, 0, 1, 0, 0 },
  { 1, 1, 1, 1, 1 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 1, 1, 1, 0 },
  { 0, 1, 0, 1, 0 },
  { 0, 1, 0, 1, 0 },
};

const pattern PATTERN_HEART = {
  { 0, 0, 0, 0, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 1, 1, 1, 1 },
  { 1, 1, 1, 1, 1 },
  { 0, 1, 1, 1, 0 },
  { 0, 1, 1, 1, 0 },
  { 0, 0, 1, 0, 0 },
};

const pattern PATTERN_EXCLAMATION = {
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
  { 0, 0, 0, 0, 0 },
  { 1, 1, 0, 1, 1 },
  { 1, 1, 0, 1, 1 },
};


const pattern PATTERN_A = {
  { 0, 0, 1, 0, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
};

const pattern PATTERN_B = {
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 0 },
};

const pattern PATTERN_C = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 0, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 },
};

const pattern PATTERN_D = {
  { 1, 1, 1, 0, 0 },
  { 1, 0, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 1, 0 },
  { 1, 1, 1, 0, 0 },
};

const pattern PATTERN_E = {
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const pattern PATTERN_H = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 1, 1, 1, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 }
};

const pattern PATTERN_I = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const pattern PATTERN_L = {
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 }
};

const pattern PATTERN_O = {
  { 0, 1, 1, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 }
};

const pattern PATTERN_U = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 1, 1, 0 }
};

const pattern PATTERN_V = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 0, 1, 0 },
  { 0, 1, 0, 1, 0 },
  { 0, 0, 1, 0, 0 }
};

const pattern PATTERN_X = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 1, 0, 1, 0 },
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 }
};

const pattern PATTERN_Y = {
  { 1, 0, 0, 0, 1 },
  { 1, 0, 0, 0, 1 },
  { 0, 1, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 0, 1, 0, 0 }
};

const pattern PATTERN_Z = {
  { 1, 1, 1, 1, 1 },
  { 0, 0, 0, 0, 1 },
  { 0, 0, 0, 1, 0 },
  { 0, 0, 1, 0, 0 },
  { 0, 1, 0, 0, 0 },
  { 1, 0, 0, 0, 0 },
  { 1, 1, 1, 1, 1 }
};


#endif
