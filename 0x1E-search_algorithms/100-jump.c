#include "search_algos.h"


size_t min(size_t a, size_t b)
{
	return (a < b) ? (a) : (b);
}
/**
 * jump_search - Searches an element.
 * @array: pointer to the first element
 * @size: size of an array
 * @value: value to search
 *
 * Description: jumps searches thru the array
 * Return: the value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0, step = sqrt(size);

	if (!array)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[min(step, size) - 1] < value)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	while (array[prev] < value && prev < min(step, size))
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	return (-1);
}
