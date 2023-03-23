#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 14
 * Description: Uses _putchar to print
 * Return: 0 for success
 */

void more_numbers(void)
{
	int a;

	for (a = 0; a <= 14; a++)
	{
		if (a / 10 != 0)
		{
			_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
		}
		_putchar(a + '0');
	}
	_putchar('\n');
}
