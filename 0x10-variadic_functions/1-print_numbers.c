#include "variadic_functions.h"

/**
 * print_numbers - Prints the nums passed to it.
 * @separator: separates the nums
 * @n: count of nums to be printed
 *
 * Description: Uses va_list macros
 * Return: nothin
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || separator[0] == '\0')
			printf("%i", va_arg(nums, int));
		else
		{
			printf("%i", va_arg(nums, int));
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
