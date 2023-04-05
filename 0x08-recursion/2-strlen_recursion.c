#include "main.h"

/**
 * _strlen_recursion - Returns length
 * @s: Pointer to the string to be printed
 *
 * Description: Uses _putchar to print.
 * Return: integer as the length
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	i++;
	return (i + _strlen_recursion(&s[i]));
}
