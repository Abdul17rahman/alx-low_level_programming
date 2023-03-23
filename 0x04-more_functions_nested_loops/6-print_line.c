#include "main.h"

/**
 * print_line - Prints a straight line
 * @n: n length of the line
 *
 * Description: This function prints a line
 * Return: void
 */

void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
}
