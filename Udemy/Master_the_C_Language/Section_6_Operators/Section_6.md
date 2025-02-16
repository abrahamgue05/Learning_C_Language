# Section 6

## Overview

<details open>
<summary>Operators</summary>

- Functions that use a symbolic name.

    - Perform mathematical or logical funtions.

    - Operators are predifiened in C, most of them are combined with infinix 
    style.

    - ***Logical operators***: Return a Boolean result that's based on the Boolean 
    result of one or two other expressions.

    - ***Arithmetic operator***: Mathematical function that takes two operands and
    perform a calculation on them.

    - *Other*: Incluede assingment, relational(<, >, !=), bitwise(<<, >>, ~)
</details>

<details open>
<summary>Expressions and Statements</summary>

- ***Statemets***: Building blocks of a program, most statements are constructed 
  from expression.

    - A program is a series of statements with speacil syntax ending with a 
    semicolon.

    - *Declaration Statemets*: int Abraham;

    - *Assingment Statements*: Abraham = 5;

    - *Function call statement*: printf("Abraham");

    - *Return Statement*: return 0;

    - **Compound Statements**: Two or more statements grouped togheter by 
    enclosing them in braces(block). 

- ***Expressions***: Consists of a combination of operators and operands, always have
  values.

    - Operands are what an operator compares on.

    - Operands can be constans, variables, or combinats.

    - *Examples*: -6, 4 + 21, q = 5 * 2, q > 3
</details>

## Basic operators

- ***Arithmetic operator***: Mathematical funtion that takes two operands and
  performs a calculation on them.

    - <details>
      <summary>Operators</summary>

      | Operator | Description | Example |
      | --- | --- | --- |
      | + | Adds two operands | A + B = 30 |
      | --- | --- | --- |
      | - | Substracts second operator from the first | A - B = -10 |
      | --- | --- | --- |
      | * | Multiplies both operands | A * B = 200 |
      | --- | --- | --- |
      | / | Divides numerator by de-numerator | B/A = 0 |
      | --- | --- | --- |
      | % | Modulus operator and reminder of after an integer division | B % A = 0 |
      | --- | --- | --- |
      | ++ | Increment operator increases the integer value by one | A++ = 11 |
      | --- | --- | --- |
      | -- | Decrement operator decreases the integer value by one | A-- = 9 |
      </details>

- ***Logical operator***: Operator that returns a Boolean result that based on
  the Booleand result of on the Boolean result of one or two other expressions.

  - <details>
      <summary>Operators</summary>

      | Operator | Description | Example |
      | --- | --- | --- |
      | && | AND operator. If both operator are non-zero, then its true | (A && B) is false |
      | --- | --- | --- |
      | (Two Parallel lines) | OR oprator. If one of two operands is non-zero, then its true | (A (Two Parallel lines) B) is true |
      | --- | --- | --- |
      | ! | NOT operator. Reverse the logical state.If condition is true, then is false | !(A && B) is true|
      </details>

- ***Assingment operator***: Set variables equal to values, is 
  the rigth to the variable at its left.

  - <details>
    <summary>Operators</summary>

    | Operator | Description | Example |
    | --- | --- | --- |
    | = | Simple assingment operator | C = A + B assings A + B to C |
    | --- | --- | --- |
    | += | Adds the value of right to left and assings it to left | C += A is C = C + A |
    | --- | --- | --- |
    | -= | Subtract the value of right to left and assings it to left | C -= A is C = C - A |
    | --- | --- | --- |
    | *= | Multiply the value of right to left and assings it to left | C *= A is C = C * A |
    | --- | --- | --- |
    | /= | Divides the value of left with right and assings it to left | C /= A is C = C / A |
    | --- | --- | --- |
    | %= | Takes modulus using two operands and assings it to left | C %= A is C = C % A |
    | --- | --- | --- |
    | <<= | Left shift AND assingment operator | C <<= 2 is C = C << 2 |
    | --- | --- | --- |
    | >>= | Right shift AND assingment operator | C >>= 2 is C = C >> 2 |
    | --- | --- | --- |
    | &= | Bitwise AND assignment operator | C &= 2 is C = C & 2 |
    | --- | --- | --- |
    | ^= | Bitwise exlusive OR and assingment operator | C ^= A is C = C ^ A |
    | --- | --- | --- |
    | (Parallel line)= | Bitwise exlusive OR and assingment operator | C (parallel line)= A is C = C (parallel line) A |
    </details>

- ***Relational operator***: Compare variables against eachother

    - <details>
      <summary>Operators</summary>

      | Operator | Description | Example |
      | --- | --- | --- |
      | == | Check two operands are equal or not. If yes, then becomes true | (A == B) is not true |
      | --- | --- | --- |
      | != | Check two operands are not equal. If values are not, then becomes true | (A != B) is true  |
      | --- | --- | --- |
      | > | Check if value of left is greather that right. If yes, the becomes true | (A > B) is not true |
      | --- | --- | --- |
      | < | Check if value of left is less that right. If yes, the becomes true | (A < B) is true |
      | --- | --- | --- |
      | >= | Check if value of left is greather or equal that right. If yes, the becomes true | (A => B) is not true |
      | --- | --- | --- |
      | <= | Check if value of left is less or equal that right. If yes, the becomes true | (A <= B) is true |
      </details>

## Bitwise operators

- C offers bitwise logical operator and shift operators.

- Looks like logical operator, but are quite different.

- Operate on the bits in integer values.

- Not used in the common program.

- One of major uses, is in operations to test and set individual bits in an
  int variable.

- Can use individual bits to store data that involve one of two choices.

- Cound use a single int to store several characteristics of a person.

- <details open>
  <summary>Binary numbers</summary>
    
    - Number that incluedes only ones and zeroes.

    - The number could be any lenght.

    - *Examples*: 0 = 10101, 1 = 0101010, 10 = 1011110101, 01 = 0110101110, 
    111000 = 000111.

    - Every binary number has a corresponding Decimal value (and vice versa).

    - *Examples*:  1 = 1, 10 = 2, 11 = 3 ... 1010111 = 87.

    - Each position for a binary number has a value.  
  </details>

- <details>
  <summary>Bitwise operators</summary>
      
    *&*:  Binary AND operator copies a bit to the result if it exixs in both,
    operands (A & B ) = 12, i.e., 0000 1100.
     
    *|*: Binary OR operator coipes a bit if it exist in either one operand,
    (A (Parallel line) B) = 64, i.e., 0011 1101.
      
    *^*: Binary XOR operator copies the bit if it is set in one operand
    but not both, (A ^ B) = 49,i.e, 0011 0001.
     
    *~*: Binary Ones Complement operator is unary and has the effect of
    'flipping' bits, ( ~A ) = -61, i.e, 1100 0011 in 2's complete form.
     
    *<<*: Binary Left shift operator. The left operands value is moved left by 
    number of bits specified by the right operand, A << 2 = 240 i.e, 1111 0000.
      
    *>>*: Binary Right shift operator. The left operands value is moved Right
    by number of bits specified by the right operand, A >> 2 = 12 i.e, 0000 1111.
  </details>



