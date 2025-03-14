#include <stdio.h>
// Used when a struct is going to use another struct

typedef struct Computer computer_t;
typedef struct Person person_t;

struct Person{
  char *name;
  computer_t *computer; //Here it calls the other
};

struct Computer{
  char *brand;
  person_t *owner;
};
