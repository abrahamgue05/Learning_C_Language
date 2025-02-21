# Section 8

## Creating and using Arrays

- Arrays allow to group values together under a sigle name, no need to separate
  variables, once the array is created it is always that size.

- *data type name[size of array]*.

- Each array is accessed by it's name, but for an especific value use the index,
  which is seted to the place of the element minus 1.

- It's very common to use a loop to access each element in a array.

- If the index is out of the array the program may crash or the array can contain
  garbage data, referred to as an out of bounds error which compiler can't check.

- A value can be sroted in an element of an array simply by specifying the array
  element.

- *grades[100] = 95*.

## Initialization

- Defining initial values for array elements makes it easier to detect when things
  go wrong.

- To initialize an array's values, simply provide ithe values in a list, values 
  are separated by commas and the list is encolsed in a pair of braces.

- *int countes[5] = {0, 0, 0, 0, 0}*.

- Is not necesary to initialize the entire array, the remaning values are set to
  zero.

- C99 added a feature called designated initializar, which allows to pick and
  choose which elements are initialized.

- C does not provide any shortcut mechanismn for initializing array elements, no
  way to specify a repeat count.

## Multidimensional Arrays

- Untill this moment on single dimension arrays have been seen, but C language
  allows arrays og any dimension to be difined.

- Two-dimensional arrays as a rectangular arrangement like rows and columns in a
  spreadsheet, mostly used for matrix.

- Declarated as a single dimension array, *int matrix[4][5]*.

- The difetences is that the values are between '{}' and each row is between '{}'.

- As the single dimension is not necessary to have entirely initialized and can be 
  subscripted, the empty are set to 0.

- Everything mentioned so far about two-dimensional arrays can be generalized to 
  three-dimensional arrays and further.

- Loops used for iterate in arrays, the more dimentions, the more nested loops.

## Variable lenght arrays

- Does not mean that the lenght of the array can be modified.

- This mean that the lenght of an array can be set in a variable.

- C99 introduced variable-lenght arrays primarily to allow C to become a better 
  language for numeracal computing.

- <details open>
  <summary>Valid and invalid decltaration</summary>
    int n = 5
    int m = 8

    | Declaration | Especification |
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