#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program checks for +ve or -ve
 * Description: Generates a rand number to check
 * Return: main return 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
