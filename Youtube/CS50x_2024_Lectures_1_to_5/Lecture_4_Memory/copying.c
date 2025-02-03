#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
    char *s = get_string("i: ");
    if(s == NULL){
        return 1;
    }

    char *t = malloc(strlen(s) + 1);//malloc takes one argument(find a place for the bytes)
    if (t == NULL){ //
        return 1;
    }

    strcpy(t, s);//strcpy(destination, source).

    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }
    printf("%s\n", s);hi
    printf("%s\n", t);Hi

    free(t);
    return(0);
}
