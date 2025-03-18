#include <stdio.h>

int *new_int_array(int size){
  int *new_arr = (int*)malloc(size * sizeof(int));// Allocate memory
  if (new_arr == NULL){
    printf(stderr, "Memory allocation failed\n");
    exit(1);// Exit if allocation fails
  }
  return new_arr;
}