#include <stdio.h>
#include <stdint.h>
#include "display.h"

void initBoard(char *boardPointer)
{
  for (int i = 0; i < HEIGHT; i++)
  {
    for (int j = 0; j < WIDTH; j++)
    {
      *(boardPointer + (i * HEIGHT) + j) = '#';
    }
  }
}

void printBoard(char *boardPointer)
{
  for (int i = 0; i < HEIGHT; i++)
  {
    for (int j = 0; j < WIDTH; j++)
    {
      printf("%c  ", *(boardPointer + (i * HEIGHT) + j));
    }
    printf("\n");
  }
}
