# Section 9

## Functions

- A self-contained unit of program code designed to accomplish a particular task.

- Sythax rules define the structure of a function and how it can be used.

- A function in C is the same as subroutines or procedures in other programming 
  languages.

- Some functions cause an action to take place, printf(causes data to be printed 
  on) your screen, others can find a value for a program to use strlen(tells a 
  program how long is a string).

- <details>
  <summary>Advantages</summary>
    
    - Allows the divide and conquer strategy, tasks can be divided into several 
    independent substacks, reducing over all complexity.

    - Reduce duplication of code, time, writing, testing and debbuging.

    - A task that is repeated several times can be done with a function.

    - Helps with readability and organization.

    - Reduce the overall development time.

    - Funtions can be reused not only in that program, but in other too.
  </details>

## Defining funtions

- The function header defines the name of the function, parameters and type for
  the values that funtions return.

- *Return_type Funtion_Name(Parameters - separated by commas){code}*.

- Choosing meaninful funtions name is as importan as choosing variables names.

- If there are no statements in the body of a funtion, the return type must be 
  void.

- To name funtions is the same as variable, names can't be repeated, not reserved,
  words.

- <details>
  <summary>Funtions prototypes</summary>

    - Is a statement that defines a funtions, defines name, return value type, 
    and the type of each of its parameters(funtions header).

    - Enables the compiler to generate the appropriate instructions at each point
    where the function is called.

    - Allows any of the functions in the file to call any funtion regardless of 
    where the funtions is called.

    - Dosen't have to be the same paramentes as the funtion (it's better to be the
    same).
  </details> 