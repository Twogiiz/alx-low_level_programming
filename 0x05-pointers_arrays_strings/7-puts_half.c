#include "main.h"

/**
 *  * _strlen - Calculates the length of a string.
 *   * @str: The input string.
 *    *
 *     * Return: The length of the string.
 *      */
int _strlen(char *str)
{
	    int len = 0;

	        while (str[len] != '\0')
			    {
				            len++;
					        }

		    return len;
}

/**
 *  * puts_half - Prints half of a string, followed by a new line.
 *   * @str: The input string.
 *    */
void puts_half(char *str)
{
	    int length = _strlen(str);
	        int start_idx, i;

		    if (length % 2 == 0)
			        {
					        start_idx = length / 2;
						    }
		        else
				    {
					            start_idx = (length - 1) / 2;
						        }

			    for (i = start_idx; i < length; i++)
				        {
						        _putchar(str[i]);
							    }

			        _putchar('\n');
}
