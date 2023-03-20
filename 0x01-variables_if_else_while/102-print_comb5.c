#include <stdio.h>

/**
 * main - This program prints a comb of two two-digits
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = 48; k < 58; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (((i == j) || (j < i)) && ((k == l) || (l < k)))
					{
						continue;
					}
					putchar(i);
					putchar(j);
					putchar(32);
					putchar(k);
					putchar(l);
					if (i < 58)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
