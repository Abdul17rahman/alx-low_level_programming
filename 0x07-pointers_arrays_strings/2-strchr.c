#include "main.h"

/**
 * _strchr - Locates a char in a string
 * @s: Pointer to a string
 * @c: The character to be located
 *
 * Description: This functions locates a char c in a string
 * Return: a pointer to the first occurance
 */

char *_strchr(char *s, char c)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
}
