# Section 5

## Overview

<details>
<summary>Variables and data types</summary>
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

    - Some types of dati in programs are number, letters or words.

    - inst, floats, doubles, etc.

### Declaring variables
- *Declaring variables*: Specifying the type of variable followed by the variable
  name.

    - Specifies to the compiler how a particular varible will be used by the 
    program.

    - *type-specifier variable-name;*.

    - Variables can be declared in-line separated by a comma or one by one. 

    - int x; int x,z,y;.

### Initialazing variables
- *Initialazing variables*: Assing it a starting ot initial value this can be done
  as part of the declaration.

    - Follow thwe variable name with the assignment operator (=) and the value.

    - int x = 21, int y = 32, z = 14.

    - int x,z = 94, valid but only z is initialized.
</details>

## Basic data types

<details>
<summary>Numeric data types</summary>

### Int
- *int*: Containt integral values only (values that dont containt decimal).
  
    - A minus sign precedint indicates that the value is negative.

    - Can be positive, negative or zero.

    - Can be expressed in hexadecimal (base 16) notation.

    - No embedded spaces are permitted between numbers.

    - Values larger than 999 cannot be expressed ussing commas.

### Float
- *float*: Store floating-point numbers (values that containt decimal places).

    - Can storage negative values such as -.0001.

    - Can also be expressed in scientific notation.

### Double
- *double*: Same as type float, only with roughly twice the precision.

    - Used whenever the range provided by a float variable is not suficient.

    - Can store twice as many significant digits.

    - Most computer represent double values using 64 bits.

    - All floating points constants are taken as double values by the compiler.

    - To explicitly express a float constant use an f at the end of it.

### Keywoords
- C offers three adjectives keywoords to modify the basic integer, doubles, float.

    - *Short*: Uses less storage than an int, saving space when space is limited.

    - *Long*: Use more storage thatn int, this enabling to express larger numbers.

    - *Unsign*: A int that have nonnegative values.  

### Bool
- *_Bool/bool*: Store just the value 0 or 1.

    - Indicate binary choises.

    - *0*: False value.

    - *1*: Indicates a true value.

- The difference between the types is in the amount of memory they occupy and 
  the range of the values.

    - The amount of storage that is allocated to store a particular type of data.

    - Depends on the computer is beeing run.

    - An int might take up 32 bits on one computer, or perhaps it might be store
    in 64.
</details>