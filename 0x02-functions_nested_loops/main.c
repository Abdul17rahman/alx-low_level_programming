#include "main.h"

int main(void)
{
	int r;

	r = print_last_digit(98);
	_putchar(r + '0');
	r = print_last_digit(0);
	_putchar(r + '0');
	r = print_last_digit(-1024);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
