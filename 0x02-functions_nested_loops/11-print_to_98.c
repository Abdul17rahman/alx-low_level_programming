#include "main.h"

/**
 * print_to_98 - prints natural nums from n to 98
 * @n: starting number
 *
 * Description: Uses nested for loops and if
 * Return: void
 */

void print_to_98(int n)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar('0' + (j * i));
			_putchar(' ');
			_putchar(',');
		}
		_putchar('\n');
	}
}
