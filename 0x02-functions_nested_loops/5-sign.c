#include <stdio.h>
#include "main.h"

/**
 * print_sign - prints the sign of a num entered
 * @n: n is the number to be checked
 *
 * Description: This function checks if n is greater, less or equal to zero
 * Return: 1 if true, 0 if its zero and -1 if its false
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
