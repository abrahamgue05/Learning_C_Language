/*
Author: Abraham Guerrero
Purspose: (Challenge) Create and use an enum type. 
Date 10/02/25 DD/MM/YY

Instruction: Creat an enum type named company, create three variables of the 
above enum type, values: XEROX, GOOGLE, EBAY.
Program should display as output, the value of the three cariables with each 
variable separeted with a new line.
Output: XEROX, GOOGLE and EBAY are printed in that order: 
2
0
4
*/
#include <stdio.h>

int main() {

    // enum variables declaration
    enum company {GOOGLE = 0, XEROX = 2,EBAY = 4};
    /*enum company {GOOGLE, FACEBOOK, XEROX, EBAY, MICROSOFT} is another
    way of declaring but values will be 0,1,2,3,4*/
    enum company fCompany = GOOGLE;
    enum company sCompany = XEROX;
    enum company tCompany = EBAY;

    // Space declaration
    char space = '\n';

    printf("%i %c %i %c %i", XEROX, space, GOOGLE, space, EBAY);

    return 0;
}