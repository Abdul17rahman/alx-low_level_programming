#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9 excluding 2 and 4
 * Description: Uses _putchar to print and if to exclude 2 and 4
 * Return: 0 for success
 */

void print_most_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		if ((a == 50) || (a == 52))
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}
