#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 * Description: Uses _putchar to print
 * Return: 0 for success
 */

void print_numbers(void)
{
	int a;

	for (a = 48; a <= 57; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
