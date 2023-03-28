#include "main.h"

/**
 * puts2 - Prints a string
 * @str: The string to print
 *
 * Description: Uses a for loop to print the string
 * Return: 0 for success
 */

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len += 2;
	}
	_putchar('\n');
}
