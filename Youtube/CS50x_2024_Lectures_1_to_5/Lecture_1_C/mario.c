#include <stdio.h>
#include <cs50.h>

int main(void){
    //Constant: Values that won't change.
    int n; //Declare here, code will be able to use it.
    do{
        n = get_int("Size: ");
    }while(n < 1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("#");
        }
        printf("\n");
    }
}
