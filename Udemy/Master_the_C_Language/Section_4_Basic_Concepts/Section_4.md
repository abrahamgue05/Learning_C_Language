# Section 4

## Comments

- Used in program to document a program to enhance its readability.

- Remainder of what the program does or what a line of code is doing.

- Ignored by the compailer.

- Very useful as they can remind the purpose of the code even after months
  later, save time reading and undestanding a code.

- *Multi line comment*: Start with /* and must be terminated with */.

- *Single line comment*: Only open with // and what is after them in the same
  line of code is a comment.

- There is no limit of comments, but it can also degrade the readability of 
  a program if not used intelligently.

- Not everything needs to be a comment using meaninful names in variables
  and functions works to.

## The preprocessor

- Unique feature of C, not found in any other higher-level programming language.

- Allow programs to be easier to read, develop, modify and port to other systems.

- Part of the C compilation that recognizes special statements.

- *#*: Preprocessor identification.

- Create constant and macros.

- Build your own library files.

- Make more powerful programs.

## The #include statement
<details open>
<summary>Preprocessors/header files/Syntax</summary>

### Preprocessors
- Preprocessor directive. 

- It's not strictly part of the executable program, however, the program won't
  work without it.

- *#*: Indicates a preporcessing directive, an instuction to a program before 
  compiling.

- Many preprocessors are directives.

- Can be anywhere and are called header files because are usually at the head
  of a program.

- .h extension.

### Header files

- Define information about some of the functions that are provided by that file.

- *stdio.h*: Standart C library header and provides functionality for displaying
  output, among many other things, like printf() funtion.

- stdio.h contains the information that the compiler needs to understand what
  printf() means, as well as other funtions that deal with input and output.

- stdio, is short fot standard input/output.

- Specify information that the compiler uses to integrate any predefined 
  functions.

### Syntax

- Header files names are case sensitive on some systems, so write them in 
  lowecase.

- There are two ways to #include header files in a program.

    - Using angle brackets (#include <Jason.h>) which tell the preprocessor
      to look for one or more standard system directories.
    
    - Using double quotes (#include "Jason.h") which tell the preprocessor 
      to first loo in the current directory.  

- Every C compiler that conforms the C11 standard will have a standard header 
  files supplied with it.

- Use #ifndef and #define to protect against multiple inclusion of header files.

- header files includes many different things like #define directives, structure
  declaration, typedef statements and function prototypes.

- Executable code normally goes into a source code file, not a header file.

## Displaying Output

- *printf*: Displays output to the screen, comes in standard library function.

    - Outputs information to the command line.

    - The information displayed is in based on what appears between the '()' 
    that immediately follow the function name (printf).

    - Values of variables and the results of computation can be also displayed.

    - Used for debugging.

## Reading input from terminal

- Very useful to ask user to enter data into a program via the terminal.

- Reads the input from the stadard input stream stdin and scans according to the
  format like %s, %d, %c, %f, etc, convert the data into the specified type.

- *scanf*: Can read a variety of formats is the most general input funtions.

    - Uses a control string followed by a list of arguments.

    - Uses pointers to variables.

    - *Rules*: Return the number of items that it successfully reads, Precede the 
    variable name with  an '&', if used to read a string into a char array, dont 
    use '&'.

    - Uses whitespaces to decide how to divide the input into separate fields. 

    - After the enter, the program proceeds and reads the input.