#include <stdio.h>

int main(void){
    char s[4];

    printf("s: ");
    scanf("%s", s);//S is an address so dont use &s
    printf("s: %s\n", s);


    /*int n;
    printf("n: ");
    scanf("%i", &n);// scanf(format code, &varible where it is going to be storage)
    printf("n: %i\n", n);*/
}