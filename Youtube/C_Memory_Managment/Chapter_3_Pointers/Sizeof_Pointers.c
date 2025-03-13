#include <stdio.h>

int main(void){

  int *intPtr;
  char *charPtr;
  double *doublePtr;

  printf("Size of int pointer: %zu bytes\n", sizeof(intPtr));// 8 bytes
  printf("Size of char pointer: %zu bytes\n", sizeof(charPtr));// 8 bytes
  printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));// 8 bytes

  int intArr[10];
  char charArr[10];
  double doubleArr[10];

  printf("\nSize of int Array: %zu bytes\n", sizeof(intArr));// 40 bytes
  printf("Size of char Array: %zu bytes\n", sizeof(charArr));// 10 bytes
  printf("Size of double Array: %zu bytes\n", sizeof(doubleArr));// 80 bytes

}