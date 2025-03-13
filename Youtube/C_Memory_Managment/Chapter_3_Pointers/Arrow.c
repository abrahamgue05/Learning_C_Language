#include <stdio.h>

int main(void){

  int point[] = {10, 20, 30};
  int *ptr = &point;

  printf("X: %d\n", ptr->x);


}