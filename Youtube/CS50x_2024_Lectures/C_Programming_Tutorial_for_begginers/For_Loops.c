#include <stdio.h>
#include <stdlib.h>

int main() {
    //For loop: Loop which allow to use an index, to know what iteration of the loop it is
    /*int i = 1;
    while (i <= 5){
        printf("%d\n", i);
        i++;
    }*/
    
    int luckyNumbers[] = {4, 8, 15, 16, 24, 42}; 
    int i;
    for(i = 1;i < 6; i++){// for(variable value, condition, operation),{code}
        printf("%d\n", luckyNumbers[i]);
    }
    return 0;
}