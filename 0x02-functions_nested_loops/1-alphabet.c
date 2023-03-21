#include "main.h"

/**
 * print_alphabet - prints lowercase letters
 * Description: This functions prints all lowercase from a-z
 * Return: main return 0 for true
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
