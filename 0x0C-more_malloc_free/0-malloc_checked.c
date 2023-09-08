#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc and checks for failure
 * @b: The number of bytes to allocate
 *
 * Description: This function allocates a block of memory of size `b` using
 * the `malloc` function. If the allocation fails, the function terminates
 * the process with a status value of 98.
 *
 * Return: A pointer to the allocated memory on success, or terminates the
 * process with a status value of 98 on failure.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
