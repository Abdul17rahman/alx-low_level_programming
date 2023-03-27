#include "main.h"

/**
 * swap_int - Swaps intergers
 * @a: a is value one to be swapped
 * @b: b is the second value
 *
 * Description: Swaps values using a temp variable
 * Return: 0 for success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
