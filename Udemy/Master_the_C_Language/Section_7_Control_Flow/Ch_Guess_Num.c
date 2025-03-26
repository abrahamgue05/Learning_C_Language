/*
Author: Abraham Guerrero
Purpose: (Challenge) Guess the number.
Date: 19/02/25 DD/MM/YY
Instruction: Program will generate a random num for 0 to 20.
Only being able to enter numbers from 1 to 20.
The program should indicate if each guess is too low or to high.
Five tries if not, the game is over.

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int num, guess, tries = 5;
    time_t t;
    srand((unsigned)time(&t));//Random number
    num = rand() %21;

    
    printf("Hi, want to play a game?\n");
    printf("You have to guess a number from 0 to 20 within 5 tries if not you lose.\n");

    while(guess != num && tries != 0){// Checks if the number entered is not the same as num.
        printf("Enter a number from 0 to 20: ");
        scanf("%i", &guess);

        if(guess >= 20 || guess <= 0){// Checks if the number enter is between 0 to 20.
            printf("Number is not between 0 to 20\n");
            continue;
        }

        if(guess < num){// Checks if guess is less than the number entered
            printf("Sorry %i is wrong. The numbers is more than that\n", guess);
            tries--;//Rest live points
            printf("You have %i tries left\n",tries);
        }else if(guess > num){// Checks if guess is more than the number entered
            printf("Sorry %i is wrong. The numbers is less than that\n", guess);
            tries--;//Rest live points 
            printf("You have %i tries left\n",tries);
        }else{
            printf("You found the number!!! Congratulations\n");
        }

        if(tries == 0){// If try is 0 then the gama ends a show the number
            printf("You ran out of lives, the number was: %i\n", num);
        }
    }
    
    return 0;
}