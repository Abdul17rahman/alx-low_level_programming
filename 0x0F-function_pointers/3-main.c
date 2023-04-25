#include "3-calc.h"

/**
 * main - check the code
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

		int (*calc)(int, int) = get_op_func(operator);

		results = calc(num1, num2);

		printf("Results: %i\n", results);
	}
	else
	{
		return (1);
	}
	
	printf("val1: %i\n", num1);
	printf("Operator is: %s\n", operator);
	printf("val2: %i\n", num2);
	
	return (0);
}
