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

	if (s[len] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[len]);
	_print_rev_recursion(&s[len - 1]);
}
