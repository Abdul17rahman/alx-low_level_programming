#include "main.h"

/**
 * main - prints the prog name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function prints its name from the command line
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;
	(void) argc;

	for (i = 0; i < strlen(argv[0]); i++)
	{
		_putchar(argv[0][i]);
	}
	_putchar('\n');
	return (0);
}
