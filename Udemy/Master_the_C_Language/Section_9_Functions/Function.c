/*
Author: Abraham Guerrero
Purpose: Look at fuctions in action.
Date: 21/02/25 DD/MM/YY

*/
#include <stdio.h>

void multiplyTwoNumbers(int x, int y);// If function is down main function, it must be defined here.

int main() {

    /*
    int result = 0;
    result = multiplyTwoNumbers(10, 20);
    printf("Result is %i\n", result);
    */

    multiplyTwoNumbers(10, 20);// 200
    multiplyTwoNumbers(20, 30);// 600
    multiplyTwoNumbers(50, 2);// 100
    return 0;
}

void multiplyTwoNumbers(int x, int y){// Can go up the main functions, but is better down here.
    int result = x * y;
    printf("The product of %i multiplied by %i is: %i\n", x, y, result);

    //return result.
}