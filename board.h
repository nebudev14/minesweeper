/* Handles manipulation of board elements. */

#ifndef BOARD_H
#define BOARD_H

#define WIDTH 5
#define HEIGHT 5

void initBoard(char* board);

void printBoard(char* board);

char getCell(char* board, int x, int y);

void changeCell(char* board, int x, int y, char value);

#endif
