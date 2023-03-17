#include <stdio.h>

/**
 * main - This program prints lowcase and uppercase chars
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int lower, upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}

	for (upper = 65; upper < 91; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
