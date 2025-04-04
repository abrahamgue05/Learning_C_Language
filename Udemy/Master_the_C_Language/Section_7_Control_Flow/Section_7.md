# Section 7

## Overview

- The statements inside code are generally executed from top to bottom.

- Control flow statements, however, break up the flow of execution by employing,
  decision making, looping, and branching.

- <details open>
  <summary>Decision-making</summary> 
  
    - Structures require that the programmer specify one or more conditions to 
    be evaluated or tested by the program.

    - If a condition is true then a statement or statements are executed.

    - If a condition is false then other statements are executed. 

    - <details>
      <summary>If statements</summary>
      
        | Statement | Description |
        | --- | --- |
        | if | Consist of a boolean expression followed by one or more statements |
        | --- | --- |
        | if...else | An if can be followed by an optional else, which executes when 
        the boolean expression is false |
        | --- | --- |
        | nested if | if or else if can be inside another if or else if statements(s) |
        </details>

- <details open>
  <summary>Repeating code</summary>
    
    - There may be situation, when a block of code needs to be executed several 
    number of times.

    - The statements are executed sequentially: The first statement in a function 
    is executed first, followed by the second, ans so on.

    - A loop statement allow to execute a statement or a group of statements 
    multiple times.

    - Onces execution leaves scope, all automatic objects that were created in that
    scope are destroyed(break and continue).

    - Can become infinite if a condition never become false.

    - <details>
      <summary>Loops</summary>

        | Loop type | Description |
        | --- | --- |
        | while loop | Repeats a statement(s) while condition is true. It test before executing |
        | --- | --- |
        | for loop | Executes a sequence of statements multiple times and abbreviates the code that 
        manages the loop variable |
        | --- | --- |
        | do...while loop | Same as while loop, except it test the condition at the end of the 
        loop body |
        | --- | --- |
        | nested loops | Can use one or more loop inside any other while, for or do...while loop |  
        </details>

- ***Branching statements***: break, continue, return.

## If statements

- The C programming language providers a general decision-making capability in
  the form of a if statement.

- if(expression)
  program statement.

- Used to stipulate execution of a program statement/s based upon specified 
  condition.

- The curly braces are required for compound inside the block.

- ***else if***: Handle additional complex decision making by adding an if 
  statement to your else clause

- if(expression 1)
    program statement 1
  else if(expression 2) execute only if the if is false
    program statement 2
  else execute if if and else if are false
    program statements

- ***nested If-else statement***: A nested if-else statement means that one if
  or else if statement inside another if or else if statement(s).

- if(boolean_expression 1){
    //Executes boolean expression 1 is true
    if(boolean_expression 2){
      // Executes when the boolean expression 2 is true
    }

- ***ternary statement***: Is a unique operator, takes three operands, the two 
  symbols that are used to denote this operator are '?' and ':'.

- *condition ? expression1 : expression2*.  

- The '?' char follows the logical expression, condition.

- On the right of the '?' are two operands, expression 1 and 2, that represent 
  choices.

- The value that results from the operation will be the value of expression1 if
  condition is true, or the value of expression2 if condition is false.

- x = y > 7 ? 25 : 50. Results in x being set to 25 if y is greater than 7, or 
  to 50 otherwise.

- An expression for the maximum or minimum of two variables can be written very
  simply using the conditional operator.

### Switch statement

- Many times a program needs to choose one of several alternatives, which can 
  be done with ifs, but is tedious and prone to errors.

- When the value of a variable is successively compared against different values
  switch statement is better to use as is more efficient and convenient.

- The expression within the '()' is successively compared against the values, cases
  must be simple and constants or constant expression.

- If a case is found the statement that follow the case are executed, when more 
  than one statement is included, they don't have to be enclosed within braces.

- ***break***: Signals the end of a particular case and causes execution of the 
  switch statement to be terminated (must be included in every case).

- ***default***: Special optional case is executed if the value of expression does
  not match any of the case values (same as else).

- ***goto***: Is available in C, has two part the goto and label name, label is 
  named following the same convention used in naming a variable.

- Should never need to use it, it was used in FORTRAN and BASIC, which can come 
  now to an habit.

## For loop

- ***Counter controlled loop***: Repeating the statement block a given number of 
  times

- ***Sentinel control loop***: The number of times the loop is repeated can 
  depend on when a condition is met.

- ***for loop***: Mostly used as a counter but can also be a sentinel, it most be
  given 3 values, the variable, the condition and the action.

- *for(variable, condition, action to variable)*.

- ***Variable***: Usually sets an initial value to a loop control variable which 
  will be local.

- ***Condition***: Logical expression evaluation to true or false, determinate
  wether the loops should continue as long as the value is true.

- ***Action***: Executed at the end of each loop iteration, usually an increment 
  or decrement of the condition, can modify several variable, just need to be 
  separated by  ','.

- ***Infinite loop***: There is no obligation to put any parameters in the loop
  statement, sometime useful for monitoring data or listening for connections.

## While loop

- Mechanism for repeating a set of statements allows execution to continue for as
  long as a specified logical expression evaluates to true.

- ***while(expression)***.

- The condition for continuation of the wile loop is tested at the start, if 
  expression starts out false, none of the loop statement will execute.

- While loop, the body is executed while the condition is true, but in the 
  do-while loop the body is executed for the first time unconditionally.

- *do statement while(expression)*.

- *Which loop to use?*: Decide whether is pre or post test needed, while loop for
  logic controlled loops and the for loop for counter controlled loops.

## Nested loops and loops control - Break and Continue

- Nested loops are valid like counting occupants in each house of the street, one
  loop for the house and the other for the occupants.

- Can have a for loop inside of a for loop, a for loop inside a while loop and the
  the other way.

- Sometimes a situation arises where a loop doesn't need to be ended, but the 
  iteration want to be skip.

- ***Continue***: This is done by this statement, an advantage is that it can 
  sometimes eliminate nesting or additional blocks of code.

- ***Break***: Causes the program to immediately exit from the loop it is 
  executing, statements in the loop are skipped, and execution of the loop is
  terminated.