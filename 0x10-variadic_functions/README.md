0x10-variadic_functions

# C - Variadic functions

This repository contains the source code for a set of variadic functions in C.

## Tasks

The following tasks are implemented:

1. Write a function that returns the sum of all its parameters.
2. Write a function that prints numbers, followed by a new line.
3. Write a function that prints strings, followed by a new line.
4. Write a function that prints anything.

## Usage

To use the variadic functions, you can include the `variadic.h` header file in your code.

For example, the following code shows how to use the `sum_them_all()` function:

```c
#include <stdio.h>
#include <variadic.h>

int main() {
  int sum = sum_them_all(3, 1, 2, 3);
  printf("The sum is %d\n", sum);
  return 0;
}
