#include "main.h"

/**
 * main - prints the number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Description: This function calculates the coins change
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int cents, bal = 0;

	if ((argc == 2))
	{
		cents = atoi(argv[1]);
		if (cents < 1)
			bal = 0;
		while (cents >= 25)
		{
			cents -= 25;
			bal++;
		}
		while (cents >= 10 && cents < 25)
		{
			cents -= 10;
			bal++;
		}
		while (cents >= 5 && cents < 10)
		{
			cents -= 5;
			bal++;
		}
		while (cents >= 2 && cents < 5)
		{
			cents -= 2;
			bal++;
		}
		while (cents == 1)
		{
			cents -= 1;
			bal++;
		}
		printf("%d\n", bal);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
