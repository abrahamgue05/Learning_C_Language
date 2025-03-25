/*
Author: Abraham Guerrero
Purpose: Watch format specifier in action.
Date 11/02/25 DD/MM/YY
*/
#include <stdio.h>

int main() {
    
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("integerVar = %i\n", integerVar);// 100
    printf("floatingVar = %f\n", floatingVar);// 331.790009
    printf("doubleVar = %e\n", doubleVar);// 8.440000e+011
    printf("doubleVar = %g\n", doubleVar);// 8.44e+011
    printf("charVar = %c\n", charVar);// W

    printf("boolVar = %i\n", boolVar);// 0

    printf("doubleVar = %g %f\n", doubleVar,floatingVar);
    // Prints two variables 8.44e+011 and 331.790009
    printf("floatingVar = %.2f\n", floatingVar);// 331.79

    return 0;
}