#include "function_pointers.h"
/**
 * int_index - searches for an interger
 * @array: targets an array holding int
 * @size: array size
 * @cmp: a funtion pointer to compare the searched int
 *
 * Return: in element match, -1 if the size is <=0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
