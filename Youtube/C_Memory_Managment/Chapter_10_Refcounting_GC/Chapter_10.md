# Chapter 10

- In C the memory is manually managed, but it is not the only strategy, rust in
  example uses a Borrow Checking.

- In garbage collection the language itself determines if a particular value
  is still live(if could possibly be useful).

- It uses a algorithm to determine what values are still alive.

- <details open>
  <summary>Algorithms</summary>

    <details>
    <summary>Reference counting</summary>

      - Simplest version of garabage collection.

      - Every object has an additional field that is it's count.

      - When the object is created or some other variable references the object.

      - Like a list if a variable goes inside of a list the reference count for
        that variable is 2 when it is remove the reference count is drop by 1.

      - Once is 0 that memory goes back to the O.S.

      - Inability to track cicles.

      - Everytime an operation is done all the objects have to be modified.
  </details>

    <details>
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
  </details>
  </details>

- At the end garbage collection is not free, there will be a run time to see if
  the variable is still alive.

- In C is manually done by the programmer, in Rust the compiler does it.

- In GCL(Garbage Collecting Languages) its paid in run time rather during
  development time.
