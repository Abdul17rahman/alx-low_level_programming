#include "main.h"

/**
 * flip_bits - Flips the bits from one no to another
 * @n: first num
 * @m: sec num
 *
 * Description: Uses a loop
 * Return: flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit, flip = n ^ m;
	int a, j = 0;

	for (a = 63; a >= 0; a--)
	{
		bit = flip >> a;
		if (bit & 1)
			j++;
	}

	return (j);
}
