#include <stdio.h>

/**
 * main - This program prints lowcase chars
 * Description: Uses a for loop
 * Return: main return 0 for success
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
