/*
Author: Abraham Guerrero
Purpose: Look at logical operators in action.
Date 13/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    _Bool a = 1;
    _Bool b = 1;
    _Bool d = 0;
    _Bool result1;
    _Bool result2;
    _Bool result3;

    result1 = a && b;
    result2 = d || d;
    result3 = !d;

    printf("When && result is: %d\n", result1); //1 Both are true
    printf("When || result is: %d\n", result2); //0 Both are false or 0 
    printf("When ! result is: %d", result3);// 1 Change operator

    return 0;
}