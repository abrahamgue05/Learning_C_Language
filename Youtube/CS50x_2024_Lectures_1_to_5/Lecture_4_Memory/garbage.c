#include <stdio.h>

int main(void){
    int score[1024];//No value asigned
    for(int i = 0; i < 1024; i++){
        printf("%i\n", score[i]);//Printed A LOT of garbage values.
    }
}