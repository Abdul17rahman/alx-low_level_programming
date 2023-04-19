#include "function_pointers.h"

/**
 * print_name - Prints the name.
 * @name: the name to be printed
 * @f: Pointer to a function
 *
 * Description: Uses function pointer to locate the function
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
