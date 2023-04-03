#include "main.h"

/**
 * _strspn - Gets length of prefix substring
 * @s: Pointer to a string
 * @accept: The substring
 *
 * Description: This function returns the length of a substring
 * Return: a pointer to the first occurance
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int byt = 0;
	int len = strlen(s);
	int len2 = strlen(accept);
	int i, k;

	for (i = 0; i < len2; i++)
	{
		for (k = 0; k < len; k++)
		{
			if (accept[i] == s[k])
				byt++;
		}
	}
	return (byt);
}
