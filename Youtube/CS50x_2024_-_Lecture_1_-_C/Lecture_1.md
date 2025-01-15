# Lecture 1

## Machine code

- Learn how to solve problems with *functions*, *variables*, *conditionals*,
  *loops* and more.

- Learn how (not) to solve probles.

- Source code: What we write.

- Machine code: What computer speaks.

- Source code --> Compiler --> Machine code.

- Compiler: Program that translates one languaje to another.

## Visual Studio Code for CS50

- VSCODE: Free, popular, compiler.

- Tabbed interface: Where we write code.

- Terminal: Console, where we type comands, for compiling a code, for running code.

- Folder interface: Where files or folders we create are going to end up.

- Activity: Vs CODE-specific features.

## From scratch to C

- Functions: Implimatiation in code of algorithms, step by step instruction
  for solving problems.

- Arguments: Inputs to functions in some context parameters.

- Side effects: Sometimes functions have them.

- Escape sequences: \n.

## CS50 Library

- #include <stdio.h>: A lot of functionalities come in separete files,
like printf();.

- header file: Represent a library(code that someone else wrote) 
like #include <stdio.h>.

- Manual pages: Documentation of how somethings work in code https://manual.cs50.io.

- cs50.h: Library made by cs50 https://manual.cs50.io.h(Documentation).

- Return value: Return a value for you to use it how ever you want.

## Format code

- Functions work as you past an argument, and for a second argument 
goes after a coma(,).

## Types

- Types of data: bool, char, double, float, int, long, string ...

- Format codes: %c, %f, %i, %li, %s.

## Conditionals

- Way of making desicions on a program.

- if, else if, if.

- If you have one line of code you can leave the {} appart.

- ==: Equality of two values.

## Variables 

- += 1 / ++: Adds one to a variable.

- --: Take one to a variable.


## Loops 

- While.

- For.

- Do while.

## Functions

- void: Use void to make own functions, void, function name, (parameters), {code}

- Call a function: function name().

## Linux

- Operative sistem.

- Textual interface(CLI).
 
- *cp*: Copy.
 
- *rmdir*: Remove directory.

- *cd*: Change directory.

- *mkdir*: Make directory.

- *ls*: list all files. 

- *mv*: move files.

- *rm*: remove file.

## Integer overflow

- RAM: Random Access Memory is where data is stored.

- Integer overflow: If you don't have enough memory, if you count high enough,
the number will wrap around to 0 or negative number.

- 32 bits can count up to 4294967295 if negatives are used half of them most be
save for negatives and the other half for positives.

## Truncation

- If you take an integer and divide it by an integer even if you get a 
  fractional value the fraction just get trown away

## Type casting 

- Treat a type as if it was another

## Floating-point impresicion

- You cant represent the infinit number that exist in the universe.
      
## Y2K 

- Back in late XX century they used only 2 digits to represent years,
  so in 2038 32 bits computers will wrap around to 0 in time.

## Video games

- In pacman if you get to level 256 the game will "crash" due to an
  integer that counts to 256.

- In Donkey Kong the further the level you get more time to compleat
  each level, but in level 22 you will "crash".

## Boing

- 2015 BOING 787, a software counter will overflow after 248 days of 
  continuous power.

- The solution restart the plane until a new software came.