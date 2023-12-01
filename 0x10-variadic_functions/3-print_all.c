#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
			printf("%s%c", sep, va_arg(args, int));
				break;

			case 'i':
			printf("%s%d", sep, va_arg(args, int));
				break;

			case 'f':
			printf("%s%f", sep, va_arg(args, double));
				break;

			case 's':
		{
			char *str = va_arg(args, char *);

			printf("%s%s", sep, str ? str : "(nil)");
				break;
		}
			default:
			continue;
		}
		sep = ", ";
	}

	va_end(args);
	putchar('\n');
}
