#include "function_pointers.h"
/**
 * print_name - a funtion to print a name
 *@f: variable to hold the string name
 *@name: the name to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
