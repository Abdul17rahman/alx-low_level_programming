#include <stdio.h>

/**
 * _abs - prints the absolute val
 * @n: n is the number to be checked
 *
 * Description: This function computes the absolute value of a num
 * Return: the value
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
