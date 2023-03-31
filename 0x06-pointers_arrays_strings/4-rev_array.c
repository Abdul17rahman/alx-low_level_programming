#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - Reverses an array of ints
 * @a: The array to be reversed
 * @n: The number of elements
 *
 * Description: Uses a for loop to reverse and len
 * Return: 0 for success
 */

void reverse_array(int *a, int n)
{
	int i, k;
	int l = 0;
	int *rev = malloc(sizeof(int) * n);

	for (i = n; i > 0; i--)
	{
		rev[l] = a[i - 1];
		l++;
	}
	for (k = 0; k < n; k++)
	{
		*(a + k) = rev[k];
	}
	free(rev);
}
