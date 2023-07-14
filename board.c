#include <stdio.h>
#include <stdint.h>

#include "board.h"

void initBoard(char *board)
{
  for (int i = 0; i < HEIGHT; i++)
  {
    for (int j = 0; j < WIDTH; j++)
    {
      *(board + (i * HEIGHT) + j) = '+';
    }
  }
}

void printBoard(char *board)
{
  for (int i = 0; i < HEIGHT; i++)
  {
    for (int j = 0; j < WIDTH; j++)
    {
      printf("%c  ", *(board + (i * HEIGHT) + j));
    }
    printf("\n");
  }
}

char getCell(char *board, int x, int y)
{
  return *(board + (x * HEIGHT) + y);
}

void changeCell(char *board, int x, int y, char value)
{
  *(board + (x * HEIGHT) + y) = value;
}
