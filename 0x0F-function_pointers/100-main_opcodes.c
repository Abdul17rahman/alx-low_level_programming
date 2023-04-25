#include "3-calc.h"

/**
 * main - prints opcodes
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0, byt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < (byt - 1))
	{
		printf("%02hhx ", ((char *)main)[i]);
		i++;
	}
	printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}
