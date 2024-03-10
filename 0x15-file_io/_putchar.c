#include <unistd.h>
/*
 * wrte character/s to the standard output using the write system call.
 */

int _putchar(char c) 
{
	return write(STDOUT_FILENO, &c, 1);
}
