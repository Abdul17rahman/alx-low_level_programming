#include "main.h"

/**
 * string_toupper - Changes all lowercase
 * @s: String to change
 *
 * Description: Uses a for loop to change the chars
 * Return: a pointer to the string
 */

char *string_toupper(char *s)
{
	int i = strlen(s);
	int k;

	for (k = 0; k < i; k++)
	{
		if (islower(s[k]))
		{
			s[k] = toupper(s[k]);
		}
	}
	return (s);
}
