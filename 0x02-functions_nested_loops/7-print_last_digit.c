#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is the number to be checked
 *
 * Description: This function uses modulo to get the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
		_putchar('0' + last);
		return (last);
	}
	else if (n < 0)
	{
		n *= -1;
		last = n % 10;
		_putchar('0' + last);
		return (last);
	}
	else if (n == 0)
	{
		_putchar('0' + n);
		return (n);
	}
}
