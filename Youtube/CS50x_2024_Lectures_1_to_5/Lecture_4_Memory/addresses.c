#include <stdio.h>

int main(void){
    /* & What address is the variable.
       * Take and address and go to it
       Pointer address of some variable that can be save in another variable.*/

    int n = 50; //Store the 50 in a grid of the memory.
    int *p = &n;
    printf("%p\n", &n); //0x70061FF1C
    printf("%p\n", p);  //0x70061FF1C
    printf("%i\n", *p); // 50 Go to the address
}