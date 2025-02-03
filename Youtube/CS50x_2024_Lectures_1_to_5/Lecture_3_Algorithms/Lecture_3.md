# Lecture 3

## Overview

- Learn how to think algorithmically.

- Learn how to use all learned in lecture 1 and 2.

## Linear Search

- A computer can only look at one value at the time in an array.

- Inpunt: An array of numbers.

- Algorithm: A way to find the number or data in the array. 

- bool: Is an expecific number like 50, true or false.

- Going to one end of the array to another, left to right or right to left.

## Binary Search

- Divide and conquer, take on half of the array, and keep dividing until the value
  is found.

## Running Time

- O: Big O notation, upper bound on the number of step.

- n: Number of things in a problem, people for example.

- *O(n^2)*: Cuadratic, n people doing n thing.

- *O(n log n)*: n log n.

- *O(n)*: Linear time, goes one by one,Linar search.

- *O(log n)*: Logarithmic.

- *O(1)*: Constant, faster, a constant number of step.

- Ω: How few steps might an algorith take, lower bound of a number of steps.

- *Ω(n^2)*. 

- *Ω(n log n)*.

- *Ω(n)*.

- *Ω(log n)*.

- *Ω(1)*.

- θ: If the number of best and worst case take the same steps.

- *θ(n^2)*. 

- *θ(n log n)*.

- *θ(n)*.

- *θ(log n)*.

- *θ(1)*.

## Structs

- Code smell: Something smell a little off about this code.

- Data structures.

## Sorting

- Set the data in an specyfic orden.

## Selection sort

- Select the smallest element again and again.

- Slow as it only rembers one number at the time.

- For i from 0 to n-1 

- (n - 1): Compere the first data.

- (n - 1) + (n - 2)...: The whole data compare.

- n(n - 1)/2: How many steps did it take.

- (n^2 - n)/2.

- n^2/2 - n/2.

- O(n^2).

- O/Ω/θ(n^2): Selection sort.

## Bubble sort

- Do something again and again(comparing).

- Repeat n/n-1 times.

- (n - 1)x(n - 1).

- n^2 - 1n - 1n +1.

- n^2 - 2n + 1.

- Asymptotc notation: Fancy way to descrive O/Ω/θ.

- Ω in the best way it will be n the less cuantitie of step.

- Push the larger number in the step to the end.

## Recursion

- Description for a function that calls it self.

- Use a function that already knows how to do it.

- Iteration: loops again and again.

## Merge sort

- Sort in 2 halfs, then merge(3 steps).

- Choose the one data that come first, take it and put it in an array.

- O/Ω/θ(n log n).