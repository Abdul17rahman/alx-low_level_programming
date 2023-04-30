#include "variadic_functions.h"

/**
 * sum_them_all - Sums the variables passed.
 * @n: Number of variables
 *
 * Description: Uses va_list macros
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);
	return (sum);
}
