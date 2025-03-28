#include <stdio.h>
#include <stdlib.h>

int main() {
    /*Pointers: Type of data, memory address(physical address of the computer). 
    data type,*, p,variable name, = &,variable name */
    int age = 30;
    int * pAge = &age; //Stores memory address of age variable.
    double gpa = 3.4;
    double * pGpa = &gpa; //Stores memory address of gpa variable.
    char grade = 'A';
    char * pGrade = &grade; //Stores memory address of grade variable.

    printf("age's memory address: %p\n", &age);//& give the physical address in memory is stored.
    //0061FFC1




    return 0;
}