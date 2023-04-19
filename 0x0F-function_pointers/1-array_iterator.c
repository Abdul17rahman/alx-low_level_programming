#include "function_pointers.h"

/**
 * array_iterator - Executes a func on array
 * @array: array to be iterated
 * @size: size of an array
 * @action: func to be executes
 *
 * Description: Executes an array on the function
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
