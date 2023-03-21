#include "main.h"

/**
 * main - prints a string using printf
 * Description: This functions prints a string passed into printf
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
