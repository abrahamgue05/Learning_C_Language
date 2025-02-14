/*
Author: Abraham Guerrero
Purspose: main functions arguments
Date 12/02/25 DD/MM/YY

*/
#include <stdio.h>

int main(int argc, char *argv[]){

    int numberOfArguments = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument1 is the program name: %s\n", argument1);
    printf("Argument2 is the command line argument: %s\n", argument2);
    
    return 0;
}