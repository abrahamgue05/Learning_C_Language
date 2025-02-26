/*
Author: Abraham Guerrero
Purspose: (Challene) Create a Tic Tac Toe Game
Date: 24/02/25 DD/MM/YY
Instruction: 3x3 array, two playes, take turns.
- Create an array to represent the board.
- 3 function: checkForWin, drawBoard, markBoard. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};// Global variable for game
int choice, player;// Global variable for choice of player and player

int checkForWin();// Checks if someone wins
void displayBoard();// Draws the board
void markBoard(char mark);// Get the board enter position

int main() {

    int gameStatus;
    char mark;

    player = 1;

    do{
        displayBoard();
        player = (player % 2) ? 1 : 2;//Ternary operator Check player.

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';//Ternary operator.

        markBoard(mark);

        gameStatus = checkForWin();
        player++;

    } while (gameStatus == -1);
    
    if (gameStatus == 1)
        printf("==>\aPlayer %d win ", --player);
    else
        printf("==>\aGame draw");

    return 0;
}

int checkForWin(){

    int returnValue = 0;
    //Someone won in one of this line
    if(square[1] == square[2] && square[2] == square[3]){
        returnValue = 1;
    }else if(square[4] == square[5] && square[5] == square[6]){
        returnValue = 1;
    }else if(square[7] == square[8] && square[8] == square[9]){
        returnValue = 1;
    }else if(square[1] == square[4] && square[4] == square[7]){
        returnValue = 1;
    }else if(square[2] == square[5] && square[5] == square[8]){
        returnValue = 1;
    }else if(square[3] == square[6] && square[6] == square[9]){
        returnValue = 1;
    }else if(square[1] == square[5] && square[5] == square[9]){
        returnValue = 1;
    }else if(square[3] == square[5] && square[5] == square[7]){
        returnValue = 1;
    }else if(square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4'
    && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' 
    && square[9] != '9'){// Draw
        returnValue = 0;
    }else{
        returnValue = -1;
    }
    return returnValue; 
}

void displayBoard(){// Draw the board
    system("cls"); //Cleans

    printf("\n\n\tTic Tac Toe\n\n\n");

    printf("Player 1 (X) - Player 2 (O)\n\n\n");

    printf("    |   |   \n");
    printf(" %c  | %c | %c  \n", square[1], square[2], square[3]);

    printf("____|___|___\n");
    printf("    |   |   \n");

    printf(" %c  | %c | %c  \n", square[4], square[5], square[6]);
    printf("____|___|___\n");
    printf("    |   |   \n");

    printf(" %c  | %c | %c  \n", square[7], square[8], square[9]);
    printf("    |   |   \n\n");

}

void markBoard(char mark){// Set the board with the player character

    if(choice == 1 && square[1] == '1'){
        square[1] = mark;
    }else if(choice == 2 && square[2] == '2'){
        square[2] = mark;
    }else if(choice == 3 && square[3] == '3'){
        square[3] = mark;
    }else if(choice == 4 && square[4] == '4'){
        square[4] = mark;
    }else if(choice == 5 && square[5] == '5'){
        square[5] = mark;
    }else if(choice == 6 && square[6] == '6'){
        square[6] = mark;
    }else if(choice == 7 && square[7] == '7'){
        square[7] = mark;
    }else if(choice == 8 && square[8] == '8'){
        square[8] = mark;
    }else if(choice == 9 && square[9] == '9'){
        square[9] = mark;
    }else{
        printf("Invalid move");
        player--;// Mark player down
        getch();// Pause the program
    }
}