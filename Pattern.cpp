
#include "Pattern.h"
#include <string.h>
#include <WProgram.h>

pattern screen;

void setPattern(const pattern p)
{
  memcpy(screen, p, sizeof(pattern));
}

void setInversePattern(const pattern p)
{
  for (int r = 0; r < NUM_ROWS; r++)
  {
    for (int c = 0; c < NUM_COLS; c++)
    {
      screen[r][c] = !p[r][c];
    }
  }
}

void scrollPattern(const pattern start, const pattern end, unsigned int milliseconds, unsigned int gap, unsigned int finish)
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
          screen[r][c] = start[r][offset];
        else if (offset < NUM_COLS + gap)
          screen[r][c] = 0;
        else
          screen[r][c] = end[r][offset - NUM_COLS - gap];
      }
    }
    delay(stepMilliseconds);
  }
}

const pattern * getPattern(unsigned char c)
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
    case 'H':
      return &PATTERN_H;
    case 'I':
      return &PATTERN_I;
    case 'L':
      return &PATTERN_L;
    case 'O':
      return &PATTERN_O;
    case 'U':
      return &PATTERN_U;
    case 'V':
      return &PATTERN_V;
    case 'X':
      return &PATTERN_X;
    case 'Y':
      return &PATTERN_Y;
    case 'Z':
      return &PATTERN_Z;
      
    default:
      return &PATTERN_BLANK;
  }
}

void scrollString(const char * s, unsigned int millisecondsPerChar, unsigned int gap)
{
  int i = 0;
  const pattern * lastPattern = &PATTERN_BLANK;
  
  while (s[i])
  {
    const pattern * currPattern = getPattern(s[i]);
    scrollPattern(*lastPattern, *currPattern, millisecondsPerChar, gap, 0);
    
    i++;
    lastPattern = currPattern;
  }
  
  scrollPattern(*lastPattern, PATTERN_BLANK, millisecondsPerChar, gap, 1);
}
