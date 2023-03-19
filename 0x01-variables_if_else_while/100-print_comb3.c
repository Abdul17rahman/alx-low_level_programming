#include <stdio.h>

/**
 * main - This program prints a comb of single
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			if ((i == j) || (j < i))
			{
				continue;
			}
			putchar(i);
			putchar(j);
			if (i < 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
