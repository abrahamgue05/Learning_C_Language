/*
Author: Abraham Guerrero
Purspose: Watch enums and char in action
Date 10/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    enum gender {male, female};
    enum gender myGender;
    myGender = male;
    enum gender anotherGender = female;

    char myCharacter = '\n';

    printf("%c", myCharacter);
    return 0;
}