/*
Author: Abraham Guerrero
Purpose: Look at switch statement in action.
Date: 18/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch (today){// When the expression today is meet prints any of the cases.
    case Sunday:
        printf("Today is Sunday.");
        break;
    case Monday: 
        printf("Today is Monday.");
        break;
    case Tuesday:
        printf("Today is Tuesday.");
        break;
    default:
        printf("Whatever");// If no expression meet it prints this.
        break;
    }
    return 0;
}