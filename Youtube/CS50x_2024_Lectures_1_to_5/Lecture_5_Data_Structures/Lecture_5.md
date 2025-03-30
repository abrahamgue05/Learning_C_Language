# Lecture 5

## Stacks and Queues

- *Data structures*: Way of structure data.

- In C, how to use the computer memory to solve problems more effectively.

- Abstract data types: Data structure but offer some caracteristics ans is up to
  the programmer how to implement it.

- *Queues*: Basically what we know as lines.

- *FIFO*: First in first out, used in queues.

- *Enqueue*: Enter the queue.

- *Dequeue*: Exit the queue.

- *Stacks*: Omnipresent as well, but follow different as FIFO.

- *LIFO*: Last in first out, used in stacks, used in emails.

- *push*: push into the stack.

- *pop*: Take out of the stack.

## Resizing Arrays

- Arrays can be resized, but it uses more memory and time in code.

- list.c

- Essentially uses pointer arithmetic using malloc.

- With linked lists.

## Linked lists

- struct, ., *, 

- Used instead of copying by using pointer to another chunk of memory, link values,
  in-between can go garbage values.

- Avoiding copying saving memory and time.

- Node can be used to store the address of the next element, the last
  node uses NULL, an extra node to store the first value.

- Node will help to not copying the values.

- *node *next*: A way to get to de next node.

- *node *list*: Beginning of a linked list, but will get a garbage value.

- *node *list = NULL*: Make the garbage value to a null value.

- *node *n = malloc(sizeofnode(node));* = to allocate space for a node.

- *(*n).number = 1*: Go to the number field and storage the number 1.

- *->*: Go there to a node used in stead of (*n).number = n->number = 1.

- *n->next = null*: And set next node to null.

- list = n; = Give the list the value of n.

- n->next = list; Get the address to set it to the node.

- listv2.c.

- O(1).

- O(n) is the representation of how many steps will take to find a number.

- Linked list don't lose time on insertion but it does in searching.

- appending is better as it goes to the end of the list and running will be
  O(n).

- listv3.c.

- O(n)

## Trees

- branches.

- binary search trees.

- divided in to(left and right).

- O(log n).

- It doesn't need to be contiguous.

- It can become a linked list, but can be fixed by reversing pointers.

## Dictionaries

- Similar as stacks and queues.

- Stores keys and values.

- Literally a dictionary, words(keys), definition(values).

- Abstract data type.

- Contact in phone number.

- O(1).

## Hashing and Hash Tables

- *Hashing*: A technique that takes any number of inputs and maps the to a
  finite number of outputs.

- *Hash function*: A function that take inputs and output some value.

- *Hash tables*: A combination of linked list and arrays.

- Linking values that are repeated or have similarities.

- O(n).

- Can have memory problems in some cases.

- hash.c.

## Tries

- Retrieval.

- The amalgam of all the above.

- *Tries*: Tree of arrays.

- 0(1).

- tries.c

- Use a LOT of memory but give ud constant time.