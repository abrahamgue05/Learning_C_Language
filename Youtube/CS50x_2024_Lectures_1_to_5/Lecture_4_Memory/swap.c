#include <stdio.h>

void swap(int *a, int *b);

int main(void){
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x,y);
    swap(&x, &y);
    printf("x is %i, y is %i\n", x,y);
}

void swap(int *a, int *b){
    int tmp = *a; //Go to a and store it in tmp tmp is a temporarily variable.
    *a = *b; // Go to the value in b and put it in the a location.
    *b = tmp; //Change the value of b to tmp.
}