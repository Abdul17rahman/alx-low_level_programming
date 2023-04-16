#include "main.h"

/**
 * str_concat - Concatenates
 * @s1: string 1
 * @s2: string 2
 *
 * Description: This function creates a space for the duplicate
 * Return: a pointer to the created array.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, size, len = strlen(s1), len2 = strlen(s2);

	char *dup;

	size = len + len2;
	dup = malloc(sizeof(char) * (size + 1));
	k = 0;

	if (dup == NULL)
		return (NULL);
	if (s1 == NULL)
		*s1 = '';
	if (s2 == NULL)
		*s2 = '';
	for (i = 0; s1[i] != '\0'; i++)
	{
		dup[k] = s1[i];
		k++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		dup[k] = s2[j];
		k++;
	}
	dup[k] = '\0';
	return (dup);

}
