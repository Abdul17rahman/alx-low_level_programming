#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Description: Uses a for loop to reverse and len
 * Return: 0 for success
 */

void print_rev(char *s)
{
	int len = _strlen(s);
	int letter;

	for (letter = len; letter > 0; letter--)
	{
		_putchar(s[letter - 1]);
	}
	_putchar('\n');
}
