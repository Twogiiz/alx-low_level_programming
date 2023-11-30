0x10. C - Variadic functions
Overview
This project covers variadic functions in C and use of the stdarg.h library. Learning objectives include:

Understanding variadic functions
Using va_start, va_arg, and va_end macros
Understanding const type qualifier
Implementing custom variadic functions
Requirements
Allowed editors: vi, vim, emacs
Ubuntu 20.04 LTS compilation with gcc and flags
Betty style C code
No global variables
Maximum 5 functions per file
Only allowed standard library functions: malloc, free, exit
Allowed macros: va_start, va_arg, va_end
Allowed use of _putchar
Tasks
0. Sum all parameters
Function sum_them_all() returns the sum of all its parameters
Prototype: int sum_them_all(const unsigned int n, ...);
1. Print numbers
Function print_numbers() prints numbers passed as parameters
Prints string separator between numbers
Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
2. Print strings
Function print_strings() prints string parameters
Prints string separator between strings
Prototype: void print_strings(const char *separator, const unsigned int n, ...);
3. Print anything
Function print_all() prints anything passed as parameter
Supports formats c, i, f, s for char, int, float, char*
Prototype: void print_all(const char * const format, ...);
Author
Julien Barbier