#include "variadic_functions.h"

/**
 * print_strings - Prints the strings passed to it.
 * @separator: separates the nums
 * @n: count of strings to be printed
 *
 * Description: Uses va_list macros
 * Return: nothin
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list nums;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL || separator[0] == '\0')
			printf("%s", va_arg(nums, char *));
		else
		{
			printf("%s", va_arg(nums, char *));
			if (i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
}
