#include <stdint.h>
#include "display.h"

void initBoard(char* board) {
  for(int i = 0; i < HEIGHT; i++) {
    for(int j = 0; j < WIDTH; j++) {
      *(board + (i * HEIGHT + j)) = '#';
    }
  }
}

void printBoard(uint8_t* board) {

}
