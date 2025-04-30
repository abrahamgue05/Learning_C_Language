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

// Clear the console screen (GNU-specific implementation)
void clear_screen() {
    system("clear");// On Windows use: system("cls");
}

// Print the current state of the game board
void print_board() {
    int x, y;

    for(y = 0; y < rows; y++) {
        for(x = 0; x < cols; x++) {
            putch(board[y * cols + x]);  // Print each character
        }
        putch('\n');  // Newline at end of each row
    }
}

// Max length of the snake
#define SNAKE_MAX_LEN 256

// SnakePart struct holds x, y coordinates of a part of the snake
struct SnakePart {
    int x, y;
};

// The Snake struct contains the snake length and an array of parts
struct Snake {
    int length;
    struct SnakePart part[SNAKE_MAX_LEN];
};

// Declare the snake
struct Snake snake;

// Struct for food items
struct Food {
    int x, y;// Position
    int consumed;// 0 = not eaten, 1 = eaten
};

struct Food food[foods];// Array of food items

// Draw the snake on the board
void draw_snake() {
    int i;
    for(i=snake.length-1; i>0; i--) {
        board[snake.part[i].y*cols + snake.part[i].x] = '*'; // Body
    }
    board[snake.part[0].y*cols + snake.part[0].x] = '@'; // Head
}

// Move the snake by shifting body parts and updating head
void move_snake(int deltaX, int deltaY) {
    int i;
    for(i=snake.length-1; i>0; i--) {
        snake.part[i] = snake.part[i-1]; // Shift each part to the previous one
    }
    snake.part[0].x += deltaX; // Move head in X direction
    snake.part[0].y += deltaY; // Move head in Y direction
}

// Read keyboard input and move snake accordingly
void read_keyboard() {
    int ch = getch(); // Get character input
    switch(ch) {
        case 'w': move_snake( 0,-1); break; // Up
        case 's': move_snake( 0, 1); break; // Down
        case 'a': move_snake(-1, 0); break; // Left
        case 'd': move_snake( 1, 0); break; // Right
    }
}

// Draw food on the board
void draw_food() {
    int i;
    for(i=0; i<foods; i++) {
        if(!food[i].consumed) {
            board[food[i].y*cols + food[i].x] = '+'; // Place food
        }
    }
}

// Randomly place food on the board
void setup_food() {
    int i;
    
    for(i = 0; i < foods; i++) {
        food[i].x = 1 + rand() % (cols - 2);  // Avoid walls
        food[i].y = 1 + rand() % (rows - 2);
        food[i].consumed = 0;
    }
}