#include <stdio.h>

int main() {  // Name   Adderess    Value
    int v1 = 1;// v1      Ox04        1
    int v2 = 2;// v2      0x08        2
    int checkpoint = 0;// 0x12        0

    int *ptr = &v1;//     0x20       0x04
    int **ptr_ptr = &ptr;// 0x28     0x20
    checkpoint = **ptr_ptr;

    ptr = &v2;// ptr      0x08       0x08
    checkpoint = **ptr_ptr;// Value = 2
    return 0;
}
