#include <stdio.h>

/**
 * main - This program prints lowcase chars except q and e
 * Description: Uses a for loop and if statement
 * Return: main return 0 for success
 */

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		if (a == 'q' || a == 'e')
			continue;
		putchar(a);
	}
	putchar('\n');
	return (0);
}
