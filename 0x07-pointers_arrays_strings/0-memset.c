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
	int i;
	s = malloc(sizeof(b));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	free(s);
	return (s);
}
