# Chapter 6

- ***Stack***: Is where local variables are stored.

- When a function is called, a new stack frame is created in memory to store
  the function parameters and local variabels.

- When a function return, its entire stack frame is deallocated.

- <details>
  <summary>Why stacks?</summary>
  
    - *Efficient Pointer Managment:* Stack "allocation" is just a quick increment
      or decrement of the stack pointer, which is extremely fast.

    - *Cache-Friendly Memory Access:* Stack memory is stored in a contiguous 
    block, enhancing cache performance due to spatial locality.

    - *Automatic Memory Managment:* Stack memory is managed automatically as 
    functions are called and as they return.

    - *Inherent Thread Safety*: Each theread has its own stack. Heap allocations
    require synchronization mechanisms when used concurrenty, potencially 
    introducing overhead.  
  </details>

- One downsides is that it has a limited size.

- If frames keep being pushed onto the stack without popping them off, eventually
  memory will be full and get a **stack overflow** (name of a famuous code site).