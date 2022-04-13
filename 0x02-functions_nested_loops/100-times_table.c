#include "main.h"
/**
* print_times_table - prints times table for numbers from 0-14
*
* @n: An input integer value
*
* Return: Nothing
*
* putformart - formarted characters to output
*
* @c: number to formart
*/

void putformart(int c);

void print_times_table(int n)
{
	int i, j, k;

	if (n > 0 && n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				putformart(k);
			}
			_putchar('\n');

		}
	}
}
/**
* putformart - formatted characters to output
*
*@c: number to format
*
* Return: nothing
*
*/
void putformart(int c)
{
	if (c <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(c + '0');
	}
	else if (c > 9 && c <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(c / 10 + '0');
		_putchar(c % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(c / 100 + '0');
		_putchar(c / 10 % 10 + '0');
		_putchar(c % 10 + '0');
	}
}
