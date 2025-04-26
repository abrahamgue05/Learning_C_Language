// Copyright EightSprites.
// Live coding available at: https://www.youtube.com/watch?v=t3y2b2_moY8
// This file is put in public domain.
// You can use it as you like.

// Libraries

#include <stdio.h>     // Standard I/O for printf, etc.
#include <stdlib.h>    // For rand, srand, system, etc.
#include <conio.h>     // For getch() - captures keyboard input without Enter
#include <time.h>      // For seeding the random number generator

// Constants

#define cols 25// Size of board
#define rows 25// Size of boards
#define foods 50// Food

// One-dimensional char array to store the board (cols x rows)
char board[cols * rows];

// Game state flag
int isGameOver = 0;

// Fills the board with walls ('#') on the edges and spaces inside
void fill_board() {
  int x, y;

  for(y = 0; y < rows; y++) {
      for(x = 0; x < cols; x++) {
          if(x == 0 || y == 0 || x == cols - 1 || y == rows - 1) {
              board[y * cols + x] = '#';  // Border
          } else {
              board[y * cols + x] = ' ';  // Empty space
          }
      }
  }
}