#include "main.h"

/**
 * print_binary - prints a numb to its binary
 * @n: number to be printed
 *
 * Description: Uses a loop and bitwise op
 * Return: nothin
 */

void print_binary(unsigned long int n)
{
	int i, j, a = 0;
	unsigned long int k;

	j = sizeof(n) * 8;

	for (i = j - 1; i >= 0; i--)
	{
		k = n >> i;

		if (k & 1)
		{
			_putchar('1');
			a++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}
