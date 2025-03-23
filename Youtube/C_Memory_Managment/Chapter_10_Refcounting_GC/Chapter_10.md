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

  - Every object has an additional field that is it's count

  </details>
  </details>
