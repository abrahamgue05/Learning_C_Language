#include <cs50.h>
#include <stdio.h>

int main(void){
    c = get_char("Do you agree? ")

    if(c == 'y' || c == 'Y'){ //Use '' when is one character || OR, && AND
        printf("Agreed!\n");
    }else if(c == 'n' || c == 'N'){
        printf("Not agreed.\n");
    }
}