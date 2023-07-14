#include <stdio.h>
#include "board.h"

/* Handles game logic. */

#ifndef GAME_H
#define GAME_H

void generateBombs(int *bombs);

void floodFill(char *board);

#endif