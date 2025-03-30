#include <stdio.h>

int main(void){\

    /* & What address is the variable.
       * Take and address and go to it
       Pointer address of some variable that can be save in another variable.
       A string is a pointer*/
    char *s = "HI!";//string s
    printf("%s\n", s); //HI!
    printf("%p\n", s);// 0x651f86241004
    printf("%p\n", &s[0]); //0x651f86241004
    printf("%p\n", &s[1]); //0x651f86241005
    printf("%p\n", &s[2]); //0x651f86241006
    printf("%p\n", &s[3]); //0x651f86241007
}
