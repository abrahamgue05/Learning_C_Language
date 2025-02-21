/*
Author: Abraham Guerrero
Purspose: Look at arrays in action
Date: 19/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    int grades[10];// Array storing 10 values
    int count = 10;// Number of values to be read
    long sum = 0;// Sum of the numbers
    float average = 0.0;// Average of the numbers

    printf("\nEnter the 10 grades: \n");// Promt for the input

    int i; 
    for (i = 0; i < count; i++){// Read the ten numbers to be averaged.
        printf("%2u> ", i + 1);// Read a grade
        scanf("%d", &grades[i]);
        sum+= grades[i];// Add it to sum
    }

    average = (float)sum/count;
    
    printf("\nAverage of the ten grades entred is: %.2f\n", average);
     
    return 0;
}