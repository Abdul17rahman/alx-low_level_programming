#include "main.h"

/**
 * _puts - Prints a string
 * @s: The string to print
 *
 * Description: Uses a for loop to print the string
 * Return: 0 for success
 */

void _puts(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		_putchar(s[len]);
		len++;
	}
	_putchar('\n');

}
