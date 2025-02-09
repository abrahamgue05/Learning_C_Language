# Section 3

## Exploring the CodeLite Enviroment

- CodeLite is a lightweight IDE.

- 3 differents areas.

- *Workspace pane*: Where files and folder are display, also gives some tools
  for the code and files

- *Editor pane*: Where the code is written.

- *Output pane*: Where errors are shown.

- *Menu bar*: Gives extra options like files, edit, view, etc.

- Style of CodeLite can be modified.

- Right click and hide to hide tabs.

## First C program
<details>
<summary>Creating/Building and Compiling</summary>

### Creating

  - File -> New -> New project -> Choose options (Section 2 configuring CodeLite).

  - Right click on folder -> New -> New project -> Choose option (section 2 
     configuring CodeLite). 

### Building

- *Clean*: Wipeout any .o files(executables), used when willing to recompile.

- *Build*: Build all the files and compile them.

- *Run*: Execute the executable file.

- *Explore tab*: Helps to see the entire workspace layout.

- *Workspace tab*: Show folders and archives of the workspace, use debug when
  runing a code localy and Release when realising the code.

### Compiling

  - Right click  file -> Compile.

  - Click Build in Menu bar -> Compile current file.
</details>

## Errors
<details>
<summary>Multiple errors</summary>

### Compiler

- Programming Languages have rules.

- *Syntax*: Something weong with the structure (Missing semicolon, misspelling).

- *Semantic*: Something is wrong with the meaning (not giving data type, logic).

- Those appear on the terminal such as *error: expected ';' before return*, 
  *fatal error: stdo.h: No such file or directory*.

- Is better to fix the first error that pups up and then the subsequent errors.

### Compiler warnings

- Don't ignore them.

- The compiler has recognized as an issue with your code that could lead to a
  potential problem.

- Is only a warning because the code can still be run.

- Like not giving any value to a variable or unused variable.

### Linker

- Having trouble linking all the object files to create an executable.

- Don't appear while compiling can appear when missing libraries.

### Runtime

- Occur when the program is executing.

- *Runtime*: Divided by zero, file not found, out of memory.

- Can couse your program to crash.

### Logic

- Errors or bugs in code that cause the program to run incorrectly.

- Made by the programmer (not making a comparation correctly).

- Not caugh by the compiler.
</detais>

## Structure of a C program

- *int main()*: Part of every C program, what is executed, is a function, must be
  one and only.

- *{}*: Defines the starting and ending of the function.

- Most line of code end with a ';'.

- For a better reding is good to use space and identation.