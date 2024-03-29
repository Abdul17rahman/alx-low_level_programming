#include "function_pointers.h"

/**
 * int_index - Searches an int
 * @array: array to be iterated
 * @size: size of an array
 * @cmp: pointer to the func
 *
 * Description: Searches the string and returns an index
 * Return: interger
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == 0)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
