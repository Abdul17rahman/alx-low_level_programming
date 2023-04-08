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

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
