#include "main.h"

/**
 * _print_rev_recursion - Prints chars recursively in reverse
 * @s: Pointer to the string to be printed
 *
 * Description: Uses _putchar to print.
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int len = strlen(s);

	if (len == -1)
	{
		_putchar('\n');
		return;
	}
	len--;
	_putchar(s[len - 1]);
	_print_rev_recursion(&s[len]);
}
