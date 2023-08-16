#include "main.h"
#include <stdlib.h> /* for  malloc funtion */
/**
 * create_array-creates an array of chars and initializes it with a speficy char.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.*
 * Return: A pointer to the created array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}