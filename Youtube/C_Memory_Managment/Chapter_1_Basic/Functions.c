#include <stdio.h>

float add(int x, int y){
    return (float)(x + y);
}

int main(void){

    float result = add(10, 5);
    
    printf("Result: %f\n", result); //15.0000

    return 0;
}