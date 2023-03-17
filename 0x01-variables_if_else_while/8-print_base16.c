#include <stdio.h>

/**
 * main - This program prints hexa
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int i, j;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}

	for (j = 97; j < 103; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
