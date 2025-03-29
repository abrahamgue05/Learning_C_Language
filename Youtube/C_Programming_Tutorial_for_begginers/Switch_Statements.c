#include <stdio.h>
#include <stdlib.h>

int main() {
    //Special type of if statements, which will compare one value to different values.

    char grade = 'C';

    switch(grade){ //switch(variable){code}
    case 'A':// case(what we will compare)
        printf("You did great!");//code
        break;//Necessary, if not it will keep running until a break
    case 'B':
        printf("You did alright!");
        break;
    case 'C':
        printf("You did poorly");
        break;
    case 'D':
        printf("You did very bad");
        break;
    case 'F':
        printf("You failed");
        break;
    default: // Execute if none of the conditions is in case
        printf("Invalid grade");
    }
    return 0;
}