#include <stdio.h>
#include <stdlib.h>

int main() {
    //Get the value that is stored in the memory address.
    int age = 30;
    int * pAge = &age;

    printf("%p\n", pAge);//0061FF18
    printf("%d\n", *pAge);//30
    printf("%p\n", &age);//0061FF18
    printf("%d\n", *&age);//30
    printf("%d", *&*&age);//30

    return 0;
}