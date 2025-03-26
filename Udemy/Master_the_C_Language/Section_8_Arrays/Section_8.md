# Section 8

## Creating and using Arrays

- Arrays allow to group values together under a single name, no need to separate
  variables, once the array is created it is always that size.

- *data type name[size of array]*.

- Each array is accessed by it's name, but for an specific value use the index,
  which is seated to the place of the element minus 1.

- It's very common to use a loop to access each element in a array.

- If the index is out of the array the program may crash or the array can contain
  garbage data, referred to as an out of bounds error which compiler can't check.

- A value can be stored in an element of an array simply by specifying the array
  element.

- *grades[100] = 95*.

## Initialization

- Defining initial values for array elements makes it easier to detect when things
  go wrong.

- To initialize an array's values, simply provide the values in a list, values 
  are separated by commas and the list is enclosed in a pair of braces.

- *int counts[5] = {0, 0, 0, 0, 0}*.

- Is not necessary to initialize the entire array, the remaining values are set to
  zero.

- C99 added a feature called designated initializer, which allows to pick and
  choose which elements are initialized.

- C does not provide any shortcut mechanism for initializing array elements, no
  way to specify a repeat count.

## Multidimensional Arrays

- Until this moment on single dimension arrays have been seen, but C language
  allows arrays og any dimension to be defined.

- Two-dimensional arrays as a rectangular arrangement like rows and columns in a
  spreadsheet, mostly used for matrix.

- Declared as a single dimension array, *int matrix[4][5]*.

- The differences is that the values are between '{}' and each row is between '{}'.

- As the single dimension is not necessary to have entirely initialized and can be 
  subscripted, the empty are set to 0.

- Everything mentioned so far about two-dimensional arrays can be generalized to 
  three-dimensional arrays and further.

- Loops used for iterate in arrays, the more dimensions, the more nested loops.

## Variable length arrays

- Does not mean that the length of the array can be modified.

- This mean that the length of an array can be set in a variable.

- C99 introduced variable-length arrays primarily to allow C to become a better 
  language for numerical computing.

- <details open>
  <summary>Valid and invalid declaration</summary>
    int n = 5
    int m = 8

    | Declaration | Specification |
    | --- | --- |
    | float a1[5] | Valid as the size is being set by a number |
    | --- | --- |
    | float a2[5*2+1] | Valid as the size is being set by an operation |
    | --- | --- |
    | float a3[sizeof(int)+1] | Valid as the size is being set by an operation 
    and size of int is 4 |
    | --- | --- |
    | float a4[-4] | Invalid as the size is not positive |
    | --- | --- |
    | float a5[0] | Invalid as the size is not positive |
    | --- | --- |
    | float a6[2.5] | Invalid as the size is not an integer |
    | --- | --- |
    | float a7[(int)2.5] | Valid as the size is set to an int by typecast |
    | --- | --- |
    | float a8[n] | Not allowed before C99, VLA |
    | --- | --- |
    | float a9[m] | Not allowed before C99, VLA |
  </details>