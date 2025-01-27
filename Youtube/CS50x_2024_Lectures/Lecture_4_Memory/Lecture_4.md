# Lecture 4

## Pixel Art

- *Resolution*: How many pixels are on the screen.

- Grid of 0 and 1.

- The larger of the grid the more resolution and 0 and 1.

## Hexadecimal

- cs50.ly/art.

- *RGB*: Red, Green, Blue.

- *Hexadecimal*: # 00RED 00GREEN 00BLUE none of each color = Black
  FFRED FFGREEN FFBLUE = White.

- 00 none of the color FF full of the color.

- 16 decimal, base-16.

- Take 16 and 1 to count taking 01 as number one and FF as 255.

- 8 bits F-4bits F-4bits.

## Memory

- Grid of memory, each square has a location.

- 0x0 and a hexadecimal.

## Pointers

- Address of some value.

- Pointers user more space in memory than the variable.

- & What address is the variable.

- * Take and address and go to it


## Strings

- Every string have a final null value to indicate the end.

- The name of the string is actually a pointer.

- typedef is a way to creat a datatype.

- *uint8_t*: datatype that comes with c.


## Pointer arithmetic

- pointer arithmetic: Doing math on addresses.

- Get every address with just using the first and adding to get every address.

## String Comparation

- Even if the text is the same the addresses are different.

- If we assing a string to another string(t = s), they will have the same address
  so what changes in one will change into the other.

## Copying

- *malloc*: Memory allocate give a the chunc of memory, taking just the value of bytes.

- *free*: Oposite of malloc.

- Computer can run out of memory making it freeze or slow.

- *Null*: The address 0.

## Malloc and Valgrind

- *valgrind*: Check the usage of memory in program.

- *Memory leak*: Lossing track of memory and never freeing it.

## Garbage value

- Number that is remnants of the computer that been on for a while.

- Values of variable that werent set by the programmer.

- Binky

- Pointers don't point to anything initially.

- *Pointees*: What pointers point to.

- A pointee can have more than one pointers.

## Swapping

- A temporary variable can help us to storage a value.

- *Passing by value*: Pass a value by coping it.

- *Globals*: Define a variable outside of any function(main/void).

- *heap*: Malloc come from here.

- *stack*: When using functions with variables and arguments stack memory is used.

- *passing by reference*: Insted of copying change them permanently.

- Use * before the variable to change its actual value it mainly change the pointers.