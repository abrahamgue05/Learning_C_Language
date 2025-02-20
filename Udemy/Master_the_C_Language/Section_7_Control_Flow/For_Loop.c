/*
Author: Abraham Guerrero
Purspose: Look at for loop in action.
Date: 19/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    unsigned int sum = 0;// Stores the sum of the int.
    unsigned int count = 0;

    printf("\n Enter the number of integers you want to sum: ");// Read the numbers of int to be summed
    scanf("%u", &count);

    unsigned int i;// Sum int from 1 to count

    for (i = 0; i <= count;i++){
        printf("Inside loop\n");
        sum += i;
    }

    printf("\nTotal of the first %u numbers is %u\n",count, sum);

    return 0;
}