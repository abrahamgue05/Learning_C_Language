# Section 5

## Overview

- Data needs to be store while the program is running, this information is 
  storage in memory(RAM).

- RAM's contents are lost when the computer is turned off, the data storage 
  on ssd or hard drives persist.

- Bits storage the data, each set of eight is call a byte, each one has an 
  address.


### Variables

- *Variables*: Are the names given to a computer memory locations which are 
  used to store values in computer.

    - Constants are values that don't change and retain their values throughout 
    the life of a program.


### Naming variables
- *Naming variables*: There are some variable name rules that must be followed.

    - All name must begin with a letter or underscore "_" and can be followed by
    any combination of letter (upper or lowe case), underscore or digits 0 - 9.

    - Names can't start with a digit or have any special values ($).

    - Names can't be any C reserved word (int). 

### Data types
- *Data types*: Represents a type of data which can be process using the program.

    - Some types of data in programs are number, letters or words.

    - inst, floats, doubles, etc.

### Declaring variables
- *Declaring variables*: Specifying the type of variable followed by the variable
  name.

    - Specifies to the compiler how a particular variable will be used by the 
    program.

    - *type-specifier variable-name;*.

    - Variables can be declared in-line separated by a comma or one by one. 

    - int x; int x,z,y;.

### Initializing variables
- *Initializing variables*: Assign it a starting ot initial value this can be done
  as part of the declaration.

    - Follow the variable name with the assignment operator (=) and the value.

    - int x = 21, int y = 32, z = 14.

    - int x,z = 94, valid but only z is initialized.
</details>

## Basic data types

<details>
<summary>Numeric data types</summary>

### Int
- *int*: Contain integral values only (values that don't contain decimal).
  
    - A minus sign precedent indicates that the value is negative.

    - Can be positive, negative or zero.

    - Can be expressed in hexadecimal (base 16) notation.

    - No embedded spaces are permitted between numbers.

    - Values larger than 999 cannot be expressed using commas.

### Float
- *float*: Store floating-point numbers (values that contain decimal places).

    - Can storage negative values such as -.0001.

    - Can also be expressed in scientific notation.

### Double
- *double*: Same as type float, only with roughly twice the precision.

    - Used whenever the range provided by a float variable is not sufficient.

    - Can store twice as many significant digits.

    - Most computer represent double values using 64 bits.

    - All floating points constants are taken as double values by the compiler.

    - To explicitly express a float constant use an f at the end of it.

### Keywords
- C offers three adjectives keywords to modify the basic integer, doubles, float.

    - *Short*: Uses less storage than an int, saving space when space is limited.

    - *Long*: Use more storage that int, this enabling to express larger numbers.

    - *Unsign*: A int that have nonnegative values.  

### Bool
- *_Bool/bool*: Store just the value 0 or 1.

    - Indicate binary choices.

    - *0*: False value.

    - *1*: Indicates a true value.

- The difference between the types is in the amount of memory they occupy and 
  the range of the values.

    - The amount of storage that is allocated to store a particular type of data.

    - Depends on the computer is being run.

    - An int might take up 32 bits on one computer, or perhaps it might be store
    in 64.
</details>

## Enums and Chars

- *Enums*: Allows the programmer to define a variable and specify the valid values
  that could be stored into variables.

    - Can create a variable named "myColor" and it can only contain one of the 
    primary color.

    - *Define*: enum primaryColor {red,yellow, blue}. 

    - *Declare*: enum primaryColor myColor, gregsColor;.

    - Define the variables myColor and gregsColor, the only permissible values are
    red, yellow and blue.

    - myColor = red;.

    - The compiler treats them as integer constants which can be manually given.

- *Chars*: Single character such as a letter 'a', a digit '6', or a semicolon ';'.

    - Only use single quote such as 'A' or '6'.

    - Can be unsigned.

    - char broiled = 'T';.

    - Can also use numerical code to assign values (ASCII).

- *Escape Characters*: C contains special characters that represent actions, 
  represented by using special symbol sequences.

    - backspacing, going to next line, making the terminal bell ring.

    - char x = '\n', goes to next line.

    - <details>
      <summary>Escape characters</summary>

      - *\a*: Alert (ANSI C).

      - *\b*: Backspace.

      - *\f*: Form feed.

      - *\n*: Newline.

      - *\r*: Carriage return.

      - *\t*: Horizontal tab.

      - *\v*: Vertical tab.

      - *\\*: Backlash( \ ).

      - \'*: Single quote( ' ).

      - *\"*: Double quote( " ).

      - *\?*: Question mark ( ? ).

      - *0oo*: Octal value (o represents an octal digit).

      - *xhh*: Hexadecimal value(h represents a hexadecimal digit).
      </details>

## Format specifiers

- Used when displaying variables as output, they specify the type of data of the
  variable to be displayed.

- *printf()*: Can display as output the values of variables

    - Arguments are separated by a comma.
    
    - First character is always the character string to be displayed. 
    
    - Along with stings, values variables can be displayed.

- *%*: Character inside the string is a special character

    - the character that immediately follows the percent sing specifies
    what type of values is to be displayed.

    - <details>
      <summary>Format specifier</summary>

        | Type | Constant Examples | printf chars |
        | --- | --- | --- |
        | char | 'a', 'n' | %c |
        | --- | --- | --- |
        | _Bool | 0, 1 | %i, %u |
        | --- | --- | --- |
        | short int | - | %hi, %hx, %ho |
        | --- | --- | --- |
        | unsigned short int | - | %hu, %hx, %ho |
        | --- | --- | --- |
        | int | 12, -97, OxFFE0 | %i, %x, %o |
        | --- | --- | --- |
        | unsigned int | 12u, 100u, 0XFFU | %u, %x, %o |
        | --- | --- | --- |
        | long int | 12L, -2001, 0xffffL | %li, %lx, %lo |
        | --- | --- | --- |
        | unsigned long int | 12UL, 100ul, 0xffeeUL | %lu, %lx, %lo |
        | --- | --- | --- |
        | long long int | 0xe5e5e5e5LL, 500ll | %lli, %llx, %llo |
        | --- | --- | --- |
        | unsigned long long int | 12ull, 0xffeeULL | %llu, %llx, %llo |
        | --- | --- | --- |
        | float | 12.35f, 3.1e-5f, 0x1.5p10, 0x1P-1| %f, %e, %g, %a |
        | --- | --- | --- |
        | double | 12.34, 3.1e-5f, 0x.1p3 | %f, %e, %g, %a |
        | --- | --- | --- |
        | long double | 12.341, 3.1e-5l | %Lf, %Le, %Lg |
      </details>

## Command line arguments

- Passing data to a program when is being executed.

- *main*: Is a special function in C, is the entry point of the program.

    - When its called two arguments are passed to the function.

    - *argc*: argument count is an integer value that specifies the number of
    arguments typed on the command line.

    - *argv*: argument vector is an array of characters pointers (strings).

    - The first entry in the array is the program that is executing. 