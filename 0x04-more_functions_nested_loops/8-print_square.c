#include "main.h"

/**
 * print_square - Prints a diagonal line
 * @size: size length and height
 *
 * Description: This function prints a square using a nested loop
 * Return: void
 */

void print_square(int size)
{
	int rows, cols;

	if (size == 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (cols = 0; cols < size; cols++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
