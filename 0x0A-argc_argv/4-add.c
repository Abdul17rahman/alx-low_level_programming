#include "main.h"

/**
 * main - Adds 2 nums
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function prints the product
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int num, i, sum;

	sum = 0;

	if ((argc == 1))
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				num = abs(strtol(argv[i], NULL, 10));
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
