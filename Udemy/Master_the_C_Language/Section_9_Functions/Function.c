/*
Author: Abraham Guerrero
Purspose: Look at funtions in action.
Date: 21/02/25 DD/MM/YY

*/
#include <stdio.h>

void multyplyTwoNumbers(int x, int y);// If funtion is down main funtion, it must be defined here.

int main() {

    /*
    int result = 0;
    result = multyplyTwoNumbres(10, 20);
    printf("Result is %i\n", result);
    */

    multyplyTwoNumbers(10, 20);// 200
    multyplyTwoNumbers(20, 30);// 600
    multyplyTwoNumbers(50, 2);// 100
    return 0;
}

void multyplyTwoNumbers(int x, int y){// Can go up the main funtions, but is better down here.
    int result = x * y;
    printf("The product of %i multiplied by %i is: %i\n", x, y, result);

    //return result.
}