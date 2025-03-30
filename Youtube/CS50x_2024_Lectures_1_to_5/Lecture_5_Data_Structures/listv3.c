#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[]){
    node *list = NULL; // *Memory for number

    for(int i = 1; i < argc; i++){ // For 
        int number = atoi(argv[i]);
        
        node *n = malloc(sizeof(node)); //* to allocate space for a node.
        if(n == NULL){
            //Free memory thus far
            return 1;
        } 
        n->number = number;
        n->next = NULL;

        if(list == NULL){ // If list is empty.
            list = n;

        }else if(n->number < list->number){ // If number belongs at beginning of list.
            n->next = list;
            list = n;

        }else{// If number belongs later in the list
            for (node *ptr = list; ptr != NULL; ptr = ptr->next){
                if(ptr->next == NULL){
                    ptr->next = n;// Appends node
                    break; 
                }
                if(n->number < ptr->next->number){ // If in middle opf list.
                    n->next = ptr->next
                    ptr->next = n;
                    break;
                }
            }    
        }
    }
    // Print the whole list;
    node *ptr = list;
    while (ptr != NULL){
        printf("%i\n", ptr->number);
        ptr = ptr->next; // goes to de next
    }
     
}