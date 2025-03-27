#include <stdio.h>

int main() {

  int number = 42;// This can be anything, C trust.
  void *generic_ptr = &number;

  // This doesn't work, incomplete type "void" is not allowed
  printf("Value of number: %d\n", *generic_ptr);

  // This works: Cast to appropiate type before dereferring
  printf("Value of number: %d\n", *(int*)generic_ptr);

    return 0;
}
