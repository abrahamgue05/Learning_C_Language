#include <stdio.h>
#include <stdlib.h>

int main() {

    //Array: Data structure where we can store a bunch of different data values.

    int luckyNumbers[] = {4, 8, 15, 16, 23, 42}; //Data type, variable name[], =, {values(separeted by comas)}
                        // 0  1   2   3   4   5
    int luckyNumbersE[10]; // No values given, but i can store no more than 10 values in the future
    char phrase[20] = "Array";
    luckyNumbers[1] = 200;
    luckyNumbersE[1] = 10;
    printf("%lf\n", luckyNumbers);
    printf("%d\n", luckyNumbers[1]); // Access an specific index, starting by 0 not 1. 
    printf("%d", luckyNumbersE[1]);

    return 0;
}