#include <stdio.h>
#include <stdlib.h>

int main() {
    //RAM: Ramdom Access Memory, used to store and keep track of information
    int age = 30; //C uses the memory address to refer to this or any other value.
    double gpa = 3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p",&age, &gpa, &grade);/*%p print a pointer, 
    in this case where a variable is storage(0061FF1C, 0061FF10, 0061FF0FF).*/

    return 0;
}