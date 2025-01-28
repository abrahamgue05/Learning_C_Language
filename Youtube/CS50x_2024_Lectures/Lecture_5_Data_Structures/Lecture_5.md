# Lecture 5

## Stacks and Queues

- *Data structures*: Way of structure data.

- In C, how to use the computer memory to solve problems more effectively.

- Abstract data types: Data structure but offer some caracteristics ans is up to
  the programmer how to implement it.

- *Queues*: Basicly what we know as lines.

- *FIFO*: First in first out, used in queues.

- *enqueue*: Enter the queue.

- *dequeue*: Exit the queue.

- *stacks*: Omnipresent as well, but follow diferent as FIFO.

- *LIFO*: Last in first out, used in stacks, used in emails.

- *push*: push into the stack.

- *pop*: Take out of the stack.

## Resizing Arrays

- Arrays can be resized, but it uses more memory and time in code.

- list.c

- Essentialy uses pointer arithmetic using malloc.

## Linked lists

- struct, ., *, 

- Used insted of copying by using pointer to another chunk of memory, link values,
  in-beetween can go garbage values.

- Avoing copying saving memory and time.

- Node can be used to store the address of the next element, the last
  node uses NULL, an extra node to store the fisrt value.

- Node will help to not copying the values.

- *node *next*: A way to get to de next node.

- *node *list*: Beginning of a linked list, but will get a garbage value.

- *node *list = NULL*: Make the garbage value to a null value.

- *node *n = malloc(sizeofnode(node));* = to allocate space for a node.

- *(*n).number = 1*: Go to the number field and storage the number 1.

- *->*: Go there to a node used in sted of (*n).number = n->number = 1.

- *n->next = null*: And set next node to null.

- list = n; = Give the list the value of n.

- n->next = list; Get the address to set it to the node.