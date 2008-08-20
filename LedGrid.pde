
#include <FrequencyTimer2.h>
#include "Pattern.h"

const int rows[] = { 12, 11, 13, 7, 9, 6, 8 };
const int cols[] = { 10, 1, 3, 2, 0 };

void setup()
{
  for (int c = 0; c < NUM_COLS; c++)
  {
    pinMode(cols[c], OUTPUT);
    digitalWrite(cols[c], LOW);
  }

  for (int r = 0; r < NUM_ROWS; r++)
  {
    pinMode(rows[r], OUTPUT);
    digitalWrite(rows[r], LOW);
  }

  setPattern(&PATTERN_BLANK);

  FrequencyTimer2::disable();
  FrequencyTimer2::setPeriod(2000);
  FrequencyTimer2::setOnOverflow(displayByRows);
}



int col = NUM_COLS - 1;

void displayByCols()
{
  digitalWrite(cols[col], LOW);

  col++;
  if (col >= NUM_COLS)
    col = 0;

  for (int row = 0; row < NUM_ROWS; row++)
  {
    digitalWrite(rows[row], (screen[row][col]) ? LOW : HIGH);
  }
  digitalWrite(cols[col], HIGH);
}



int row = NUM_ROWS - 1;

void displayByRows()
{
  digitalWrite(rows[row], HIGH);
  
  row++;
  if (row >= NUM_ROWS)
    row = 0;
    
  for (int col = 0; col < NUM_COLS; col++)
  {
    digitalWrite(cols[col], (screen[row][col]) ? HIGH : LOW);
  }
  digitalWrite(rows[row], LOW);
  
}


void loop()
{
  scrollString("ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!", 400, 2);
  delay(1000);
}

