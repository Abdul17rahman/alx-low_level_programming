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
	int num, i, j, sum;

	sum = 0;

	if ((argc == 1))
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			num = abs(atoi(argv[i]));
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
