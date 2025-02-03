#include <ctype.h>

typedef struct node{
    char *name;
    char *number;
    struct node *next;
}node;

unsigned hash(char *word){
    return toupper(word[0]) - 'A';
}