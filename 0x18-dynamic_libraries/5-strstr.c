#include "main.h"

/**
 * _strstr - Searches a string
 * @haystack: Pointer to a string
 * @needle: Byte to be searched
 *
 * Description: This function returns a pointer to string
 * Return: a pointer to the first occurance
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int len = strlen(haystack);

	j = 0;
	for (i = 0; i < len; i++)
	{
		if (*(needle + j) == *(haystack + i))
		{
			j++;
			return (&haystack[i]);
		}
	}
	return (NULL);
}
