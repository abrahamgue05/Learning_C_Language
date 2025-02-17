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
      | if | Consist of a booleand expression followed by one or more statements |
      | --- | --- |
      | if...else | An if can be followed by an optional else, which executes when the boolean expresion is false |
      | --- | --- |
      | nested if | if or else if can be inside another if or else if statements(s) |
      </details>

- <details open>
  <summary>Repiting code</summary>
    
    - There may be situation, when a block of code needs to be executed several 
    number of times.

    - The statements are executed sequentially: The first statement in a funtion 
    is executed first, followed by the second, ans so on.

    - A loop statement allow to execute a statement or a group of statements 
    multiple times.

    - Onces execution leaves scope, all automatic objects that were created in that
    scope are destroyed(break and continue).

    - Can become infinite if a condition never become false.

    - <details>
    <summary>Loops<summary>
    </details>
      | Loop type | Description |
      | --- | --- |
      | while loop | Repeats a statement(s) while condition is true. It test before executing |
      | --- | --- |
      | for loop | Executes a sequence of statements multiple times and abbreviates the code that manages the loop varaible |
      | --- | --- |
      | do...while loop | Same as while loop, except it test the condition at the end of the loop body |
      | --- | --- |
      | nested loops | Can use one or more loop inside any other while, for or do...while loop |  
   </details>

- ***Branching statements***: break, continue, return.