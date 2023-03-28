#include "main.h"

/**
 * rev_string - Reverses a string in reverse
 * @s: The string to be reversed
 *
 * Description: Uses a for loop to reverse and len
 * Return: 0 for success
 */

void rev_string(char *s)
{
	int len = (int)strlen(s);
	int letter;
	int i = 0;
	char n[len];

	printf("%i\n", len);
	printf("%i\n", (int)strlen(n));
	for (letter = len; letter > 0; letter--)
	{
		n[i] = s[letter - 1];
		printf("%c\n", n[i]);
		i++;
	}
	printf("%s\n", n);
	printf("%i\n", i);
	printf("%i\n", (int)strlen(s));
}
