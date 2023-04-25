#include "3-calc.h"

/**
 * main - check the code
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;
	char *operator;

	if (argc == 4)
	{
		num1 = atoi(argv[1]);
		operator = argv[2];
		num2 = atoi(argv[3]);
		results = get_op_func(operator)(num1, num2);

		printf("Results: %i\n", results);
	}
	else
	{
		return (1);
	}
	return (0);
}
