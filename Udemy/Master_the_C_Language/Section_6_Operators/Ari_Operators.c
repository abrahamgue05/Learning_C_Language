/*
Author: Abraham Guerrero
Purpose: Look at arithmetic operators in action. 
Date: 13/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    int a = 33;
    int b = 15;
    int result = 0;
    
    printf("With + result is: %d\n", result = a + b);// 48
    printf("With - result is: %d\n", result = a - b);// 18
    printf("With * result is: %d\n", result = a * b);// 495
    printf("With / result is: %d\n", result = a / b);// 2
    printf("With %% result is: %d\n", result = a % b);// 3
    printf("With ++ after variableresult is: %d\n", result = a++);// 33 
    printf("With ++ before variable result is: %d\n", result = ++a);// 35
    printf("With -- after variable result is: %d\n", result = --a);// 34
    printf("With -- before variable result is: %d\n", result = a--);// 34


    return 0;
}