# Chapter 5

- Unions in C can hold one of several types.

- They're like a less-strict sum type from the world of functional programming.

- Can hold either an int or a char*, but not both at the same time.

- Provide the list of possible types so the C compiler knows the maximum potential
  memory requirement.

- Unions store their value in the same memory location, no matter which field 
  or type is actively being used. 

- Unions can be use to create "helpers" for accessing different parts of a pice of
  memory.