#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s) 
{
	/* Base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	/* Print current char */
	_putchar(*s);

	/* Recursive call */  
	_puts_recursion(s + 1);
}
