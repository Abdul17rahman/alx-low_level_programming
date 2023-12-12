#include "search_algos.h"

/**
 * linear_search - Searches an element.
 * @array: pointer to the first element
 * @size: size of an array
 * @value: value to search
 *
 * Description: Sequencially searches thru the array
 * Return: the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
