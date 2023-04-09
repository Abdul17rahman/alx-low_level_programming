#include "main.h"

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function prints its name from the command line
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
