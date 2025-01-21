#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){
    char *s = get_string("i: ");
    char *t = get_string("j: ");

    printf("%p\n", s); //0x609d0d5dc6b0
    printf("%p\n", t); //0x609d0d5dc6f0
}
