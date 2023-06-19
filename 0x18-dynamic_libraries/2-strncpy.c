#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination variable
 * @src: Source pointer
 * @n: the number of bytes
 *
 * Description: Uses a for loop to copy strings the string
 * Return: a pointer to the string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p = strlen(src);
	int k, l;

	k = 0;

	for (l = 0; l < p && l < n; l++)
	{
		dest[k] = src[l];
		k++;
	}
	for (; l < n; l++)
		dest[l] = '\0';
	return (dest);
}
