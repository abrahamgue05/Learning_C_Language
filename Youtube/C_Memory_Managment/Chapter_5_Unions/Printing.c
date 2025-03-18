#include <stdio.h>

typedef union AgeOrName{
  int age;
  char *name;
} age_or_name_t;


int main(){

  age_or_name_t lane = {.age = 29};
  printf("age: %d\n", lane.age);// age: 29
  
  printf("name: %s\n", lane.name);// name: 
  return 0;
}