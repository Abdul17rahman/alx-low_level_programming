#include "main.h"

/**
 * _strncat - Concatenates a string
 * @dest: The destination variable
 * @src: Source pointer
 * @n: the number of bytes
 *
 * Description: Uses a for loop to concatenate the string
 * Return: a pointer to the string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = strlen(dest);
	int p = strlen(src);
	int k, l;

	for (k = 0; k <= i; k++)
	{
		if (dest[k] == '\0')
		{
			for (l = 0; l < p && l < n; l++)
			{
				dest[k] += src[l];
				k++;
			}
		}
	}
	return (dest);
}
