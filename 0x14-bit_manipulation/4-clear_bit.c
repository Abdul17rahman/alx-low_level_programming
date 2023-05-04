#include "main.h"

/**
 * clear_bit - sets the bit value to 0
 * @n: pointer to a no to set
 * @index: the index position
 *
 * Description: Uses an if to check
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index)) & *n;
	return (1);
}
