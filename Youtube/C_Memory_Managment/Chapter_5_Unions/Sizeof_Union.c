#include <stdio.h>

typedef union IntOrErrorMessage{
  int data;
  char err[256];
} int_or_err_message_t;


int main() {
    
  printf("The size of IntOrErrorMessage is %zu bytes\n", sizeof(int_or_err_message_t)); // 256 bytes

    return 0;
}