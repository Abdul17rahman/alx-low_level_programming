#include "main.h"

/**
 * factorial - calculate factorial
 * @n: number
 *
 * Description: Uses recursion to print.
 * Return: interger
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
