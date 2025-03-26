/*
Author: Abraham Guerrero
Purpose: Look at if statement in action.
Date: 17/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    int number_to_test, reminder;

    printf("Enter your number to be tested: ");
    scanf("%i", &number_to_test);
    
    reminder = number_to_test % 2;// Check if the residual of the division is 0.

    if (reminder == 0){
        printf("The number is even.\n");
    }else// Not always braces are need
        printf("The number is odd.\n");
    
    return 0;
}