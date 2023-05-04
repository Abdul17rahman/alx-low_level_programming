#include "main.h"

/**
 * binary_to_uint - Converts a binary to unsigned int
 * @b: pointer to a string
 *
 * Description: Uses a loop
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;

	while (*b)
	{
		a <<= 1;

		if (*b == '1')
			a |= 1;
		else if (*b != '0')
			return (0);
		b++;
	}

	return (a);
}
