# Section 10

## Overview

- A string constat or string literal is a sequence of chartacterss or symbols 
  between a pair of double-quote characters.

- The message inside the printf() is a string.

- To display a "" a \ must be used *printf("For\"you write\\\ ".")*.

- To display a \ use the escape sequence \\.

- A special character with the code value 0 is added to the end of each string
  also know as null character.

- A string i always termianted by a null chatacter, so the length of a sting is 
  always one greater than the number of characters in the string.

- ***null***: Is a string terminator.

- ***NULL***: Is a symbol that represents a memory address that dosen't reference
  anything.

- The \0 can be added to the end of the string explicitily.

## Defining a string

- C has no special variable type for strings, meaning that there are no special 
  operators in language for processing strings.

- The standard library provides an extensive range of functions to handle strings.

- Strings are stored in an array of type char, characters in strings are stored in
  adjacent memory cells, one char per cell.

- *char myString[20]*, this variable can accomodate a string that contains up to 
  19 characters.

- <details>
  <summary>Initializing</summary>

    - Can initialize a string variable when it is declared.

    - *char word[] = {'H', 'e', 'l', 'l', 'o'};*.

    - To initialize a string, it is the same as any other array initialization.

      - C compiler automatically computes the number of elements in the array,

      - Based upon the numer of initializers, reserces space in memory for exactly
      seven characters(adds the null terminator automatically).

    - Can be initialize explicitly, but make sure to leave an extra space for the
    null operator, if not a compiler error can appear(depends on compiler).

    - At the end is better to let the compiler do it.

    - *char str[40] = "To be";*, space is allocate for all 40 elements but only 5
    will be used.
  </details>

- After Initializing is not possible, instead the function strcopy() must be used, 
  but it is possible to do it one by one in the array index.

- *Displaying*: is the same as displaying any array, just by calling it, 
  ***%s*** is the format specifier for outputting a null-termianted string.

- *Inputing*: For strings with spaces there are many function such as fgets(), if
  there are no spaces scanf() is still the best option, no matter which one is 
  used, no '&' is used.

- *Compare*: To compare two string are equal, one way is to compare one by one
  index, but the function strcmp() compare the whole string.

- The string constant "x" is not the same as the character constant 'x', 'x' is a
  basic type(char), "x" is a derived type, an array of char.

