
#include "Pattern.h"
#include <string.h>
#include <WProgram.h>

pattern screen;

void setPattern(const patternp * p)
{
  for (int r = 0; r < NUM_ROWS; r++)
  {
    for (int c = 0; c < NUM_COLS; c++)
    {
      screen[r][c] = pgm_read_byte(&((*p)[r][c]));
    }
  }
}

void setInversePattern(const patternp * p)
{
  for (int r = 0; r < NUM_ROWS; r++)
  {
    for (int c = 0; c < NUM_COLS; c++)
    {
      screen[r][c] = !pgm_read_byte(&((*p)[r][c]));
    }
  }
}

void scrollPattern(const patternp * start, const patternp * end, unsigned int milliseconds, unsigned int gap, unsigned int finish)
{
  int stepMilliseconds = milliseconds / NUM_COLS;

  int frames = NUM_COLS + gap;
  if (finish)
    frames++;
  
  for (int frame = 0; frame < frames; frame++)
  {
    for (int c = 0; c < NUM_COLS; c++)
    {
      for (int r = 0; r < NUM_ROWS; r++)
      {
        int offset = c + frame;
        
        if (offset < NUM_COLS)
          screen[r][c] = pgm_read_byte(&((*start)[r][offset]));
        else if (offset < NUM_COLS + gap)
          screen[r][c] = 0;
        else
          screen[r][c] =  pgm_read_byte(&((*end)[r][offset - NUM_COLS - gap]));
      }
    }
    delay(stepMilliseconds);
  }
}

const patternp * getPattern(unsigned char c)
{
  switch (c)
  {
    case '!':
      return &PATTERN_EXCLAMATION;

    case 'A':
      return &PATTERN_A;
    case 'B':
      return &PATTERN_B;
    case 'C':
      return &PATTERN_C;
    case 'D':
      return &PATTERN_D;
    case 'E':
      return &PATTERN_E;
    case 'F':
      return &PATTERN_F;
    case 'G':
      return &PATTERN_G;
    case 'H':
      return &PATTERN_H;
    case 'I':
      return &PATTERN_I;
    case 'J':
      return &PATTERN_J;
    case 'K':
      return &PATTERN_K;
    case 'L':
      return &PATTERN_L;
    case 'M':
      return &PATTERN_M;
    case 'N':
      return &PATTERN_N;
    case 'O':
      return &PATTERN_O;
    case 'P':
      return &PATTERN_P;
    case 'Q':
      return &PATTERN_Q;
    case 'R':
      return &PATTERN_R;
    case 'S':
      return &PATTERN_S;
    case 'T':
      return &PATTERN_T;
    case 'U':
      return &PATTERN_U;
    case 'V':
      return &PATTERN_V;
    case 'W':
      return &PATTERN_W;
    case 'X':
      return &PATTERN_X;
    case 'Y':
      return &PATTERN_Y;
    case 'Z':
      return &PATTERN_Z;

    case '1':
      return &PATTERN_1;
    case '2':
      return &PATTERN_2;
    case '3':
      return &PATTERN_3;
    case '4':
      return &PATTERN_4;
    case '5':
      return &PATTERN_5;
    case '6':
      return &PATTERN_6;
    case '7':
      return &PATTERN_7;
    case '8':
      return &PATTERN_8;
    case '9':
      return &PATTERN_9;
    case '0':
      return &PATTERN_0;

    default:
      return &PATTERN_BLANK;
  }
}

void scrollString(const char * s, unsigned int millisecondsPerChar, unsigned int gap)
{
  int i = 0;
  const patternp * lastPattern = &PATTERN_BLANK;
  
  while (s[i])
  {
    const pattern * currPattern = getPattern(s[i]);
    scrollPattern(lastPattern, currPattern, millisecondsPerChar, gap, 0);
    
    i++;
    lastPattern = currPattern;
  }
  
  scrollPattern(lastPattern, &PATTERN_BLANK, millisecondsPerChar, gap, 1);
}
