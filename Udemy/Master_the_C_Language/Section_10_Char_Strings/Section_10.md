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

## Constant Strings

- In some program a constant is need like the value of pi(3.1416) it never 
  changes.

- A word can tell mure that a number does, *owed = 0.015 * housevalue* is not the
  same as *owed = taxrate * housevalue*.

- If the 0.015 is used more than one time and it need to be changed locating each
  time is used is harder than just changing the value on the taxrate.

- <details>
  <summary>#define</details>

    - The preprocessor define constants.

    - *#define TAXRATE 0.015*.

    - When the program is compiled, the value 0.015 will be substituted everywhere
    the TAXRATE is used.

    - It's not a variable as a value can not be assigned to it.

    - *Special syntax*: No equal sign used to assing value, no semicolon.

    - Can appear anywhere in the program, no such a thing as a local define.

    - Makes programs more portable.

    - Can store char and strings. 
  </details>

- <details>
  <summary>const</summary>

    - C90 added a second way to create symbolic constants, using the keyword 
    *const*.

    - *const int MONTHS = 12;*, MONTHS is a symbolic constant for 12.

    - *const* makes MONTHS into a read-only value, can be used in calculation,
    and its value can't be alter.

    - *const* is a newer approach and is more flexible than using #define, as it
    let to declare a type and allows better control over which parts use it.

    - C has yet a third way to create symbolic constants enums(Section 5).

    - Can also be used in stings when a message is repeated.

    - If it's tried to be modified later, the compiler will show an error.
  </details>