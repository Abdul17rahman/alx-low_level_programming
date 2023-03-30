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
	int len = strlen(s);
	int i, k;
	int n = 0;
	char rev[len + 1];

	for (i = len; i >= 0; i--)
	{
		rev[n] = s[i - 1];
		n++;
	}
	for (k = 0; k < len; k++)
	{
		*(s + k) = rev[k];
	}
}
