#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: String to be capitalized
 *
 * Description: Uses a for loop to change the chars
 * Return: a pointer to the string
 */

char *cap_string(char *s)
{
	int i = strlen(s);
	int k;

	for (k = 0; k < i; k++)
	{
		printf("%c", s[k]);
	}
	printf("%i\n", i);
	printf("In Func: %s\n", s);
	return (s);
}
