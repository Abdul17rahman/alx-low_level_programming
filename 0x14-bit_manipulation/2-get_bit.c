#include "main.h"

/**
 * get_bit - gets the bit value
 * @n: decimal
 * @index: the index position
 *
 * Description: Uses an if to check
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
