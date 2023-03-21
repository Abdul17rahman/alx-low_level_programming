#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase letters 10 times
 * Description: This functions prints all lowercase from a-z
 * Return: main return 0 for true
 */

void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i < 10; i++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
