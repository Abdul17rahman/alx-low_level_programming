#include <stdio.h>

/**
 * main - This program prints a comb of single
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
