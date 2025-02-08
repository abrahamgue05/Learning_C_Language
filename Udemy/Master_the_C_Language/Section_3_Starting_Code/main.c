#include <stdio.h> //Preprocessor/Header file.

int main() { // Funtion that gets executed when program is run.
    int myFavoriteNumber = 0;

    printf("Please enter your favorite number\n");
    scanf("%d", &myFavoriteNumber);
    printf("Your entered number: %d\n", myFavoriteNumber);

    return 0;
}