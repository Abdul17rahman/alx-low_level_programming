#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: n length of the diagonal
 *
 * Description: This function prints a diagonal using a loop
 * Return: void
 */

void print_diagonal(int n)
{
	int a, b;

	if (n == 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (a == b)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
