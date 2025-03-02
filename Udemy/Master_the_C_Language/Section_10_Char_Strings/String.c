/*
Author: Abraham Guerrero
Purspose: Initializing an string.
Date: 25/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    char str[5] = {"Hellow"};// Full string and shows warning: initializer-string
    //for array of chars is too long
    char str2[5] = {'H', 'e', 'l', 'l', '0'};// Separated by ''
    char str3[7] = {"Hellow"};// Only 5 spaced used

    printf("The string printed is: %s\n", str);// Prints Hello♀ a
    printf("The string printed is: %s\n", str2);// Prints Hell0Hello♀ a
    printf("The string printed is: %s\n", str3);// Prints Hellow

    printf("The last position of the sting is %c\n", str3[8]);// Prints e
    printf("The last position of the sting is %c", str2[-1]);// Prints nothing

    return 0;
}