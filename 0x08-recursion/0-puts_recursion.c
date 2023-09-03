#include "main.h" 

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
        /* If string is empty, print new line and return*/
        if (*s == '\0') {
                _putchar('\n');
                return;
        }

        /* Print current character*/
        _putchar(*s);
        
        /* Recursively call on rest of string*/
        _puts_recursion(s + 1);
}
