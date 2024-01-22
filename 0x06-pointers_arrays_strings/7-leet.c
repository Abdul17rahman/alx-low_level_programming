#include "main.h"

/**
 * leet - encodes to 1337
 * @s: String to be capitalized
 *
 * Description: Uses a for loop to encode the chars
 * Return: a pointer to the string
 */

char *leet(char *s)
{
	int i = strlen(s);
	int k, n;
	char moz[] = "1337";

	for (k = 0; k < i; k++)
	{
		printf("%c", s[k]);
		for (n = 0; n < strlen(moz); n++)
		{
			
		}
	}
	return (s);
}
