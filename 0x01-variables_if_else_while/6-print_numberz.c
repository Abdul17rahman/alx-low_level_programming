#include <stdio.h>

/**
 * main - This program prints single digits of base 10
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
