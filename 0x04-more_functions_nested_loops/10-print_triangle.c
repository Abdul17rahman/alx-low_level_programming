#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: size and height
 *
 * Description: This function prints a triangle using a nested loop
 * Return: void
 */

void print_triangle(int size)
{
	int rows, har;

	if (size == 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (int rows = 0; rows < size; rows++)
		{
			for (int stars = (size - 1); stars > rows; stars--)
			{
				_putchar(' ');
			}
			for (int har = 0; har <= rows; har++)
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
