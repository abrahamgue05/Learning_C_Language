# Chapter 6

- ***Stack***: Is where local variables are stored.

- When a function is called, a new stack frame is created in memory to store
  the function parameters and local variables.

- When a function return, its entire stack frame is deallocated.

- <details>
  <summary>Why stacks?</summary>

    - *Efficient Pointer Management:* Stack "allocation" is just a quick increment
      or decrement of the stack pointer, which is extremely fast.

    - *Cache-Friendly Memory Access:* Stack memory is stored in a contiguous
    block, enhancing cache performance due to spatial locality.

    - *Automatic Memory Management:* Stack memory is managed automatically as
    functions are called and as they return.

    - *Inherent Thread Safety*: Each thread has its own stack. Heap allocations
    require synchronization mechanisms when used concurrent, potentially
    introducing overhead.
  </details>

- One downsides is that it has a limited size.

- If frames keep being pushed onto the stack without popping them off, eventually
  memory will be full and get a **stack overflow** (name of a famous code site).

- Memory addresses on the stack are always changing and getting reused.

- Stack is simpler and faster but is a bit more limited, used when size is know
  ahead of time and can exist within one function.

- Heap is slower and a bit more complex to work wit but it does allow to create
  more sophisticated and more complicated data structures.

- Heap is used when the size ahead of time of the different objects that are going
  to be use is unknown.

- C always need to know how large some piece of data is and where to put it.

- ***Malloc:*** Allocates a specified number of bytes of memory on the heap and
  returns the pointer to the allocated memory.

- Is uninitialized which means that it contains whatever data was previously at
  that location.

- It's the programer responsibility to ensure that the allocated memory is
  properly initialized and eventually freed using free().

- *Big Endian:* In big-endian system, the most significant byte(the biggest part
  of the number) is stored first, at the lowest memory address.

- *Little Endian:* The least significant byte is stored first, at the lowest
  memory address.
