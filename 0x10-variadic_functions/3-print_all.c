#include "variadic_functions.h"

/**
 * print_all - Prints the everything passed to it.
 * @format: format types
 *
 * Description: Uses va_list macros
 * Return: nothin
 */

void print_all(const char * const format, ...)
{
	int i = 0;

	char *str;

	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					printf("%f", va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);

					if (!str)
						str = "(nil)";
					printf("%s", str);
					break;
				default:
					i++;
					continue;
			}
			printf(", ");
			i++;
		}
	}
	printf("\n");
}
