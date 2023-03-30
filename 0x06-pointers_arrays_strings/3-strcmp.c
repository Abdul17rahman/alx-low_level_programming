#include "main.h"

/**
 * _strcmp - Compares 2 strings
 * @s1: First string
 * @s2: Second string
 *
 * Description: Uses a for loop to compare strings the string
 * Return: an interger less than, equal or greater than zero
 */

int _strcmp(char *s1, char *s2)
{
	int i = strlen(s1);
	int n = strlen(s2);
	int j, k;

	for (j = 0; j < i; j++)
	{
		for (k = 0; k < n; k++)
		{
			if (s1[j] == s2[k])
			{
				return (0);
			}
			else if (s1[j] < s2[k])
			{
				return (-15);
			}
			else
			{
				return (15);
			}
		}
	}
}
