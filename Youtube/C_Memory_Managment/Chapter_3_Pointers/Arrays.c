#include <stdio.h>

int main(void){

  int numbers[5] = {1, 2, 3, 4, 5};
  int *nums_ptr = numbers;
  int *num_1 = nums_ptr + 1;

  for (int i = 0; i < 5; i++){
    printf("%d\n", numbers[i]);
  }
  
  printf("%p\n", *nums_ptr);// Gets 0 index adress
  printf("%p\n", *num_1);// Gets 1 index address

}