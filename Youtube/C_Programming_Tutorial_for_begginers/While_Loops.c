#include <stdio.h>
#include <stdlib.h>

int main() {
    //Structure to loop over a block of code until the condition is meet 

    //int index = 0;//Set value
    /*while(index <= 5){//while,(condition),{code} //while index variabel is less or equal to 5
        printf("%d\n", index); //print the value of index
        index++; //Index plus 1 and do the loop again

        //Infinete loop: When condition is never meet
    }*/

    int index = 6;
    do{ //Do while loops do the code before checking the condition
        printf("%d\n", index);
        index++;
    } while (index <= 5);
    



    return 0;
}