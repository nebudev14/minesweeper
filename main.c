#include <stdio.h>
#include <stdint.h>

#include "display.h"

int main() {
  char board[HEIGHT][WIDTH];
  initBoard(*board);
  printBoard(*board);

  return 0;
}
