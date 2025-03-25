# Chapter 10

- In C the memory is manually managed, but it is not the only strategy, rust in
  example uses a Borrow Checking.

- In garbage collection the language itself determines if a particular value
  is still live(if could possibly be useful).

- It uses a algorithm to determine what values are still alive.

- <details>
  <summary>Reference counting</summary>

    - Simplest version of garabage collection.

    - Every object has an additional field that is it's count.

    - *Increment:* When the object is created or some other variable references
        the object.

    - *Decrement and free:* When the refactor reaches 0, there are no references
      to the object, the memory is free.

    - Once is 0 that memory goes back to the O.S.

    - Inability to track cicles.

    - Everytime an operation is done all the objects have to be modified.
  </details>

- <details>
  <summary>Mark and Sweep</summary>

    - Find all the variable that are directly reference by the stack frames.

    - Trace through all of the conections of those variables to find anyother
      that are referenced.

    - Once traced those who are directly and indriectly referenced are marked
      and those who are not referenced can be sweep.

    - More complex but can handled certain cases that at least naive reference
      counting can't handle, like cicles.

    - Dosent require to do operation every single time that is touched or
      references a variable.

    - <details>
      <summary>Pros</summary>

      - Can detect cicles
      </details>

  </details>
  </details>

- At the end garbage collection is not free, there will be a run time to see if
  the variable is still alive.

- In C is manually done by the programmer with malloc and free.

- Rust has a compile-time system tgat ebsyres memory safety.

- In GCL(Garbage Collecting Languages) its paid in run time rather during
  development time.

- <details open>
  <summary>Garbage collector</summary>

    - Is a program(or a part of a program) that automatically frees memory that is
      not longer used.

    - Languages like Python, Java, JS, OCaml and Go uses garbage collectora as the
      as the code is running to manage memory.

    - Autimatic memory managment can be a huge productivity boost for developers
      (less code, and sometimes less memory-related bugs).

    - It usually comes with a performance cost because it's always running.
  </details>
