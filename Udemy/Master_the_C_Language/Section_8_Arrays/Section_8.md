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