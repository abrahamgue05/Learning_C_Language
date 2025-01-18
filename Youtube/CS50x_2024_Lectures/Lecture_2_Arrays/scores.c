#include <stdio.h>

int main(void){
    int score1 = 72; //4 bytes
    int score2 = 73; //4 bytes
    int score3 = 33; //4 bytes

    printf("Average: %.2f\n", (score1 + score2 + score3) / 3.0);
}