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
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
