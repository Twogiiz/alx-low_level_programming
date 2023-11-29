#include "function_pointers.h"
/**
 * array_iterator - Iterates through an array
 * @array: target array
 * @size: array size
 * @action: a function pointer to array
 * return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
