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
	int rows, har, stars;

	if (size == 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (rows = 0; rows < size; rows++)
		{
			for (stars = (size - 1); stars > rows; stars--)
			{
				_putchar(' ');
			}
			for (har = 0; har <= rows; har++)
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
