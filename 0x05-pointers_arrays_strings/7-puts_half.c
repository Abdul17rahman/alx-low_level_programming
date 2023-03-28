#include "main.h"

/**
 * puts_half - Prints a string
 * @str: The string to print
 *
 * Description: Uses a for loop to print the string
 * Return: 0 for success
 */

void puts_half(char *str)
{
	int len = 0;
	int length = strlen(str);

	while (str[len] != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(str[length / 2]);
		}
		len++;
	}
	_putchar('\n');
}
