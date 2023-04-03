#include "main.h"

/**
 * _memset - Fills memory
 * @s: Pointer to the memory area
 * @b: constant byte
 * @n: Numbers of bytes
 *
 * Description: This functions fills a memory area with b.
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
