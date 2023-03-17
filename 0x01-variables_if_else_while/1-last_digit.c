#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program print the last digit
 * Description: Generates a rand number and print its last digit
 * Return: main return 0 for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last = n % 10;

	if (last > 5)
	{
		printf("Last digit of %i is %d and is greater than 5\n", n, last);
	}
	if (last < 6)
	{
		printf("Last digit of %i is %d and is less than 6 and not 0\n", n, last);
	}
	if (last == 0)
	{
		printf("Last digit of %i is %d and is 0\n", n, last);
	}
	return (0);
}
