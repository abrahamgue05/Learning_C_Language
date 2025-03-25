/*
Author: Abraham Guerrero
Purpose: (Challenge) Print the byte size of the basic data types
Date 16/02/25 DD/MM/YY

Instructions: Display the byte size of the following types
int, char, long, long long, double, long double
Can use %zd format specifier to format each size
*/
#include <stdio.h>

int main() {
                                                // Windows, OnlineGDB, LinuxMint
    printf("Size of int is: %zd\n",sizeof(int));// 4, 4, 4
    printf("Size of char is: %zd\n",sizeof(char));// 1, 1, 1
    printf("Size of long is: %zd\n",sizeof(long));// 4, 8, 8
    printf("Size of long long is: %zd\n",sizeof(long long));// 8, 8, 8
    printf("Size of float is: %zd\n",sizeof(float));// 4, 4, 4
    printf("Size of double is: %zd\n",sizeof(double));// 8, 8, 8
    printf("Size of long double is: %zd\n",sizeof(long double));// 12, 16, 16


    return 0;
}