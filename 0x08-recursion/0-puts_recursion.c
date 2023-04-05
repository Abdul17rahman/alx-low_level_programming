#include "main.h"

/**
 * _puts_recursion - Prints chars recursively
 * @s: Pointer to the string to be printed
 *
 * Description: Uses _putchar to print.
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i = 0;
	int len = strlen(s);

	if (i == len)
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
