#include "main.h"

/**
 * positive_or_negative - This program checks for +ve or -ve
 * @n: The number to be tested
 *
 * Description: Generates a rand number to check
 */
void positive_or_negative(int n)
{
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
}
