#include "search_algos.h"

/**
 * binary_search - Searches an element.
 * @array: pointer to the first element
 * @size: size of an array
 * @value: value to search
 *
 * Description: half divide searches thru the array
 * Return: the value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left = 0, right = size - 1, middle;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			printf(", ");
		}
		printf("\n");
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
