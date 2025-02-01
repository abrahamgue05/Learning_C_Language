#include <stdio.h>
#include <stdlib.h>

int main() {

    int age; // No value, expect one from the user
    double gpa;
    char name[20]; //Specify the number of carecters you can store, no more than [] set.
    char pet[10];

    printf("Enter your name: ");
    fgets(name, 20, stdin);/* Grabs a hole line of characters, only strings
     fgets,(variable, number of charcters, where we want to get the information)
     with these one what goes after the %s printing ia also taken*/ 
    printf("Enter your age: ");
    scanf("%d", &age); //scanf,("format specifiers, &variable(where the variable is gonna be storage)")
    printf("Enter your pets name: ");
    scanf("%s", pet);
    printf("Enter your GPA: ");
    scanf("%lf", &gpa);
    printf("Hi %s You are %d years old and your GPA is %f",name, age, gpa);

    return 0;
}