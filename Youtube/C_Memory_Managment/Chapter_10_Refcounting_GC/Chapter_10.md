# Chapter 10

- In C the memory is manually managed, but it is not the only strategy, rust in
  example uses a Borrow Checking.

- In garbage collection the language itself determines if a particular value
  is still live(if could possibly be useful).

- It uses a algorithm to determine what values are still alive.

- <details open>
  <summary>Reference counting</summary>

    - Simplest version of garbage collection.

    - Every object has an additional field that is it's count.

    - *Increment:* When the object is created or some other variable references
        the object.

    - *Decrement and free:* When the refactor reaches 0, there are no references
      to the object, the memory is free.

    - Once is 0 that memory goes back to the O.S.

    - Inability to track cycles.

    - Every time an operation is done all the objects have to be modified.
  </details>

- <details open>
  <summary>Mark and Sweep</summary>

    - Find all the variable that are directly reference by the stack frames.

    - Trace through all of the connections of those variables to find any other
      that are referenced.

    - Once traced those who are directly and indirectly referenced are marked
      and those who are not referenced can be sweep.

    - More complex but can handled certain cases that at least naive reference
      counting can't handle, like cycles.

    - Doesn't require to do operation every single time that is touched or
      references a variable.

    - First described by John McCarthy in 1960, primarily for managing memory in ((lisp)). 
      It's a two-phase algorithm:
    
    - *Mark Phase:* Traverses the object graph, marking all reachable objects.

    - *Sweep Phase:* Scan memory, collecting all unmarked objects, which are 
      considered garbage.

    - <details>
      <summary>Pros</summary>

        - Can detect cycles, and thus memory leaks in certain cases.

        - Less on-demand bookkeeping.

        - Reduces potential performance degradation in highly multithreaded
          programs.
      </details>

    - <details>
      <summary>Cons</summary>

        - More complex to implement.

        - Can cause "stop-the-world" pauses when lots of objects exist and must be
          freed.

        - Higher memory overhead.

        - Less predictable performance.
      </details>

  </details>
  </details>

- At the end garbage collection is not free, there will be a run time to see if
  the variable is still alive.

- In C is manually done by the programmer with malloc and free.

- Rust has a compile-time system that ensures memory safety.

- In GCL(Garbage Collecting Languages) its paid in run time rather during
  development time.

- <details open>
  <summary>Garbage collector</summary>

    - Is a program(or a part of a program) that automatically frees memory that is
      not longer used.

    - Languages like Python, Java, JS, OCaml and Go uses garbage collector as the
      as the code is running to manage memory.

    - Automatic memory management can be a huge productivity boost for developers
      (less code, and sometimes less memory-related bugs).

    - It usually comes with a performance cost because it's always running.
  </details>
