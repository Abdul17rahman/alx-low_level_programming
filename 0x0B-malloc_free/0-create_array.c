#include "main.h"

/**
 * create_array - Creates an array of chars
 * @size: size of the array
 * @c: char to initialize
 *
 * Description: This function creates an array
 * Return: a pointer to the created array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	array = malloc(sizeof(char) * size);

	if (size == 0)
		return NULL;
	if (!array)
		return NULL;
	free(array);
	return array;


}
