#include "main.h"

/**
 * main - Multiplies 2 nums
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function prints the product
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int num1, num2, pdt;

	if ((argc != 3))
		printf("Error\n");
	else
	{
		num1 = strtol(argv[1], NULL, 10);
		num2 = strtol(argv[2], NULL, 10);	
		pdt = num1 * num2;
		printf("%d\n", pdt);
	}
	return (0);
}
