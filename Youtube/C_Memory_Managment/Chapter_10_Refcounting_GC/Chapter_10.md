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

      -

  </details>
  </details>
