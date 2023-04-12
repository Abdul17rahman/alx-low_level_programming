#include "main.h"

/**
 * _strdup - Creates space for a string
 * @str: string to copy
 *
 * Description: This function creates a space for the duplicate
 * Return: a pointer to the created array.
 */

char *_strdup(char *str)
{
	int i, len = strlen(str);

	char *dup;

	dup = malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);


}
