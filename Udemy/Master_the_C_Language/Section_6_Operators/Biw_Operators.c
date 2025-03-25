/*
Author: Abraham Guerrero
Purpose: Look at bitwise operators in action, basically the change bits values.
Date 16/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    unsigned int a = 60;// 0011 1100
    unsigned int b = 13;// 0000 1101
    int result;

    printf("Result with & operator is: %d\n", result = a & b);// 12
    printf("Result with | operator is: %d\n", result = a | b);// 61
    printf("Result with ^ operator is: %d\n", result = a ^ b);// 49
    printf("Result with ~a operator is: %d\n", result = ~a);// -61
    printf("Result with a << 2 operator is: %d\n", result = a << 2);// 240
    printf("Result with a >> 2 operator is: %d\n", result = a >> 2);// 15
    printf("Result with ~b operator is: %d\n", result = ~b);// -14
    printf("Result with b << 2 operator is: %d\n", result = b << 2);// 52
    printf("Result with b >> 2 operator is: %d\n", result = b >> 2);// 3
    return 0;
}