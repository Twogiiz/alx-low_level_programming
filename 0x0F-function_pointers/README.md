
# 0x0F. C - Function pointers

## Tasks

### 0. What's my name

Write a function that prints a name.  

Prototype: `void print_name(char *name, void (*f)(char *));`

### 1. If you spend too much time thinking about a thing, you'll never get it done 

Write a function that executes a function given as a parameter on each element of an array.

Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`

### 2. To hell with circumstances; I create opportunities  

Write a function that searches for an integer.  

Prototype: `int int_index(int *array, int size, int (*cmp)(int));`

### 3. A goal is not always meant to be reached, it often serves simply as something to aim at

Write a program that performs simple operations.

You are allowed to use the standard library.

- 3-calc.h: header file 
- 3-op_functions.c: contains 5 functions
- 3-get_op_func.c: function that selects the correct operation function
- 3-main.c: main function

## Requirements

- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- Code should use the Betty style
- Global variables are not allowed
- No more than 5 functions per file
- Only the standard library functions malloc, free and exit can be used
- _putchar is allowed
- Header file `function_pointers.h` with function prototypes should be included
- Files should be include guarded

## Repo:

- GitHub repository: alx-low_level_programming
- Directory: 0x0F-function_pointers
