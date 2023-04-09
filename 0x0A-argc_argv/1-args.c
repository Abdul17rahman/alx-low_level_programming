#include "main.h"

/**
 * main - prints the no. of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function prints its name from the command line
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	(void) argv[];

	printf("%i\n", argc - 1);
	return (0);
}
