#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14
 * Description: Uses _putchar to print
 * Return: 0 for success
 */

void more_numbers(void)
{
	int a, j;

	for (a = 0; a <= 9; a++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
