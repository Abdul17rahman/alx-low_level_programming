#include "main.h"

/**
 * _strpbrk - Searches a string
 * @s: Pointer to a string
 * @accept: Byte to be searched
 *
 * Description: This function returns a pointer to string
 * Return: a pointer to the first occurance
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int len = strlen(s);

	j = 0;
	if (*(accept + j) == '\0')
		return (NULL);
	for (i = 0; i < len; i++)
	{
		if (*(accept + j) == *(s + i))
		{
			j++;
			return (&s[j]);
		}
	}
}
