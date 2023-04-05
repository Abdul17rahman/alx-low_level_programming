#include "main.h"

/**
 * _pow_recursion - Calculates the power of a number
 * @x: base
 * @y: power
 *
 * Description: Uses recursion
 * Return: interger
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion((x - 1),(y - 1)));
}
