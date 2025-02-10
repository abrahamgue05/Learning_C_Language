# Section 5

# Overview

- Data needs to be store while the program is running, this information is 
  storage in memory(RAM).

- RAM's contents are lost when the computer is turned off, the data storage 
  on ssd or hard drives persist.

- Bits storage the data, each set of eight is call a byte, each one has an 
  address.

- *Variables*: Are the names you give to a computer memory locations which are 
  used to store values in computer.

    - Constants are values that don't change and retain their values throughout 
    the life of a program.

- *Naming variables*: There are some variable name rules that must be followed.

    - All name must begin with a letter or underscore "_" and can be followed by
    any combination of letter (upper or lowe case), underscore or digits 0 - 9.

    - Names can't start with a digit or have any special values ($).

    - Names can't be any C reserved word (int). 

- *Data types*: Represents a type of data which can be process using the program.

    - Some types of dati in programs are number, letters or words.

    - inst, floats, doubles, etc.

- *Declaring variables*: Specifying the type of variable followed by the variable
  name.

    - Specifies to the compiler how a particular varible will be used by the 
    program.

    - *type-specifier variable-name;*.

    - Variables can be declared in-line separated by a comma or one by one. 

    - int x; int x,z,y;.

- *Initialazing variables*: Assing it a starting ot initial value this can be done
  as part of the declaration.

    - Follow thwe variable name with the assignment operator (=) and the value.

    - int x = 21, int y = 32, z = 14.

    - int x,z = 94, valid but only z is initialized.