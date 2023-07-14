#include <stdio.h>
#include <stdint.h>

#include "display.h"

int main() {
  char board[5][5];
  printf("HELLO\n");
  initBoard(board);
  for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
      printf("%s", board[i][j]);
    }
    printf("\n");
  }

  return 0;
}
