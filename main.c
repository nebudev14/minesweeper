#include <stdio.h>
#include <stdint.h>

#include "board.h"

int main()
{
  char board[HEIGHT][WIDTH];
  int bombs[3][2]; // Coordinates!
  initBoard(*board);
  changeCell(*board, 2, 3, 'c');
  
  // printBoard(*board);
  // printf("%c\n", getCell(*board, 3, 3));

  return 0;
}
