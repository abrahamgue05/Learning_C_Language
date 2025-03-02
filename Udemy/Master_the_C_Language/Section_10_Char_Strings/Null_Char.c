/*
Author: Abraham Guerrero
Purspose: Look at null character.
Date: 24/02/25 DD/MM/YY

*/
#include <stdio.h>

int main() {

    printf("The character \0 is used as a termiante string");
    /* When compiling tis program the output is:
        - The character.
        - Only the first part of the string has been displayed.
        - Outputs ends after the first two words because the function stops out
        putting the stringwhen it reaches the first null character.
        - The second \0 at the end of the string will never be reaced.
        - The first \0 at the end of the string will never be .
    */
    return 0;
}