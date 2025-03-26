# Section 9

## Functions

- A self-contained unit of program code designed to accomplish a particular task.

- Syntax rules define the structure of a function and how it can be used.

- A function in C is the same as subroutines or procedures in other programming 
  languages.

- Some functions cause an action to take place, printf(causes data to be printed 
  on) your screen, others can find a value for a program to use strlen(tells a 
  program how long is a string).

- <details>
  <summary>Advantages</summary>
    
    - Allows the divide and conquer strategy, tasks can be divided into several 
    independent subtasks, reducing over all complexity.

    - Reduce duplication of code, time, writing, testing and debugging.

    - A task that is repeated several times can be done with a function.

    - Helps with readability and organization.

    - Reduce the overall development time.

    - Functions can be reused not only in that program, but in other too.
  </details>

## Defining functions

- The function header defines the name of the function, parameters and type for
  the values that functions return.

- *Return_type Function_Name(Parameters - separated by commas){code}*.

- Choosing meaningful functions name is as important as choosing variables names.

- If there are no statements in the body of a function, the return type must be 
  void.

- To name functions is the same as variable, names can't be repeated, not reserved,
  words.

- <details>
  <summary>Functions prototypes</summary>

    - Is a statement that defines a functions, defines name, return value type, 
    and the type of each of its parameters(functions header).

    - Enables the compiler to generate the appropriate instructions at each point
    where the function is called.

    - Allows any of the functions in the file to call any function regardless of 
    where the functions is called.

    - Doesn't have to be the same parameters as the function (it's better to be the
    same).
  </details> 

## Arguments and Parameters

- ***Parameter***: Variable in a function declaration and function definition/
  implementation.

- ***Arguments***: Are the data type that is passed into the functions parameters,
  the actual value of a variable that gets passed to the function.

- Functions parameters are defined within the function header.

- The parameters for a function are a list of parameter names with their types,
  separated by commas and goes between parentheses.

- A function can have no parameters, in which case, *void* must be inside the 
  parentheses.

- The names of the parameter are local to the function, they will assume the value
  of the arguments passed when a function is called.

- Parameters should be used inside the function code, if not they are not needed.

- When passing an array as an argument to a function, must also pass an additional
  argument specifying the size of the array.

- Parameters greatly increase the usefulness and flexibility of a function, the 
  printf(display what ever is tell to be displayed via the parameters and 
  arguments).

## Returning data from functions

- Not always the result want to be displayed, functions can return data using 
  specific syntax.

- The return type of a function can be specified, including enumeration types and
  pointers.

- <details>
  <summary>Return statement</summary>

    - The return expression with no value mean the exiting of a function.

    - This form of the return statement is used exclusively in a function where the
      return type has been declared as void(doesn't return a value).

    - The most general form of the return statement is: *return expression;*

    - This form of return statement must be used when the return value type for 
    the function has been declared as some type other than void.

    - The value that is returned to the calling program is the value that results
    when the expression is evaluated.
    
    - A function that has a statements in the function body but don't return a 
    value must have the return type as void if not compiler will have an error 
    message.

    - If expression results in a value that is different from the specified, the 
    compiler will insert a conversion from the type of expression(when possible).

    - There can be more than one more return statement in a function.
  </details>

- <details>
  <summary>Invoking a function and assigning data returned</summary>

    - A function is called by using the function name followed by the arguments 
    between parentheses.

    - The values of the arguments that were specified will be assigned to the 
    parameters.

    - When the function executes, the computation proceeds using the values as 
    arguments, arguments most be the same as specified in parameters.

    - If the function is used as the right side of an assignment statement, the 
    return value will be substituted for the function.

    - *int x = myFunctionCall()*.

    - The calling function doesn't have to recognize or process the value returned
    from a called function.
  </details>

## Local and Global Variables

- ***Local variables***: Variables defined inside a function are known as local 
  variable, the local variable can only access by the function in which the 
  variable is defined.

- ***Global variables***: The opposite of a local variable, it can be accessed and
  change value by any function in the program, has the lifetime of the program.

- If a local and global variable have the same name the local variable will be 
  taken.

- Global variable are a "bad" thing and should be avoided, as it promote coupling
  between function(dependencies), hard to find the location of bug.
