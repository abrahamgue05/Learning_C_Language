// Someties a struct may need to reference itself, or be used recursively

#include <stdio.h>
typedef struct node node_t;

typedef struct Node{
  int value;
  node_t *next;
}node_t;


int main(void){


}