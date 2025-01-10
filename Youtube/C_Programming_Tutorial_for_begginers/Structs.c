#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};




int main() {
    //Data structure that store groups of data types

    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    strcpy(student1.name, "Jim"); //Strings are array
    strcpy(student1.major, "Business");

    struct Student student2;
    student2.age = 19;
    student2.gpa = 2.5;
    strcpy(student2.name, "Pam"); //Strings are array
    strcpy(student2.major, "Art");

    printf("%f\n", student1.gpa);
    printf("%s\n", student1.name);
    printf("%d\n", student2.age);
    printf("%s\n", student2.major);

    return 0;
}