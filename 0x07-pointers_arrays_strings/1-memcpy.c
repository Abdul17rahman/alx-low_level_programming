#include "main.h"

/**
 * _memcpy - Copies memory
 * @dest: Pointer to destination memory
 * @src: Pointer to source memory
 * @n: Numbers of bytes
 *
 * Description: This function copies memory areas.
 * Return: a pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
