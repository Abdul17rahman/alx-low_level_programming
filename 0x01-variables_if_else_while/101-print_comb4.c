#include <stdio.h>

/**
 * main - This program prints a comb of three
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int i, j, k;

	for (i = 48; i < 57; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if ((i == j) || (j < i) || (i == k) || (k < i) || (k == j) || (k < j))
				{
					continue;
				}
				putchar(i);
				putchar(j);
				putchar(k);
				if (i < 55)
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
