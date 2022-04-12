#include <unistd.h>

#include "main.h"

/**
*print_sign - description check
*@n: input print-sign
*
*Descriptions: Print the sign of a No.
*
*Return: (1) if num is greater than 0, 0 if its zeroand -1 if less than zero
*/

int print_sign(int n)
{
	int num;

	if (n < 0)
	{
		num = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	return (num);
}
