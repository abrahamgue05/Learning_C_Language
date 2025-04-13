# Sort

# Methods 

- There are many ways to sort an array of numbers.

- On this folder, I'm going to talk through some of the sort methods.

- On the CS50, a little of sort and times of sort was seen, but here I'm going to
use them and describe them.

## Insertion Sort

- It isn't formally attributed to a single inventor.

- Used since the early days of computing.

- Considered one of the classical elementary sorting algorithms.

- *Best/Worst/Average case:* O(n^2).

- <details>
  <summary>Steps</summary>

    1.- Starts with the first element.

    2.- Finds the smallest element in the unsorted position.

    3.- Swap it with the current element.
    
    4.- Move to the next position and repeat until the array is sorted.
  </details>

## Selection Sort

- Intuitive sorting algorithm that builds the final sorted array on item at a
time.

- Inspired in how people sort cards in their hands.

- Used since the early days of computing.

- *Best case*: O(n).

- *Worst/Average case:* O(n^2)

- <details>
  <summary>Steps</summary>

    1.- Starts from the second element.

    2.- Compare it with the element(s) before it.

    3.- Shift larger elements one position to the right.
    
    4.- Insert the current element into the correct position.

    5.- Repeat for all elements.
  </details>

## Merge sort

- Divide-and-conquer sorting algorithm.

- One of the first sorting algorithms to be developed with a strong theoretical
foundation.

- John von Neumann 1945.

- *Best/Worst/Average case:* O(n log n).

- <details>
  <summary>Steps</summary>

    1.- Split the array into two halves.

    2.- Recursively apply merge sort to each half.

    3.- Merge the two sorted halves into one sorted array.
  </details>

## Quick Sort

- Divide-and-conquer sorting algorithm.

- One of the most efficient and widely used sorted algorithm in practice.

- Tony Hoare in 1959.

- *Best/Average case:* O(n log n).

- *Worst case:* O(n^2).

- <details>
  <summary>Steps</summary>

    1.- Choose a pivot element from the array.

    2.- Partition the array: Elements less than the pivot go to the left, elements
        grater go to the right.

    3.- Recursively apply quick sort to the left and right sub-arrays.
  </details>

## Shell Sort

- Gap-based sorting algorithm (generalization of insertion sort).

- Designed to improve performance over simple quadratic sorts like insertion and
  bubble.

- Donald Shell 1959.

- *Best case:* O(n log n).

- *Average case:* Between O(n log^2 n) and O(n.^15).

- *Worst case:* O(n^2).

- <details>
  <summary>Steps</summary>

    1.- Chose a gap sequence (e.g. n/2, n/4, ...,1).

    2.- For each gap:

          - Compare elements that are gap position apart.

          - Use insertion sort logic within these gap-separated elements.

    3.- Reduce the gap and repeat until the gap is 1 (standard insertion sort).
  </details>

## Radix Sort

- Non-comparative sorting algorithm - sort integers (or strings)  by processing
  individual digits or characters.

- Particularly efficient for fixed-length keys like integers or strings of the 
  same length.

- Herman Hollerith 1887.

- *Best/Average/Worst:* O(nk), where k is the number of digits or key length.

- <details>
  <summary>Steps</summary>

    1.- Identify the maximum number of digits (or characters) in the data.

    2.- Sort the data digit, starting from the least significant digit (LSD) to
        the most significant digit (MSD).

        - Use a stable sorting algorithm (like Counting sort) for each digit
          position.

    3.- After the final digit pass, the array is fully sorted.
  </details>