/*
Author: Abraham Guerrero
Purpose: Look at else if in action
Date: 17/02/25 DD/MM/YY
*/
#include <stdio.h>

int main() {

    int number, sign;

    printf("Please type in a number: ");
    scanf("%i", &number);

    if(number < 0){// Check if numbers is negative
        sign = -1;
    }else if(number == 0){// Checks if number is 0
        sign = 0;
    }else// If number is not negative or 0 then is positive
        sign = 1;

    printf("Sign = %i\n", sign);
    return 0;
}