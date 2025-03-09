#include <stdio.h>

int main() {
                                                //LinuxMint
    printf("Size of int is: %zd\n",sizeof(int));// 4
    printf("Size of char is: %zd\n",sizeof(char));// 1
    printf("Size of char* is: %zd\n",sizeof(char*));// 8
    printf("Size of float is: %zd\n",sizeof(float));// 4
    printf("Size of double is: %zd\n",sizeof(double));// 8

    return 0;
}