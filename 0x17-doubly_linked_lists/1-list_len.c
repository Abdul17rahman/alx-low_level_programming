#include "lists.h"

/**
 * list_len - cal the elements of a list.
 * @h: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: size_t, the number of elem
 */

size_t list_len(const list_t *h)
{
	unsigned int el = 0;

	while (h)
	{
		h = h->next;
		el++;
	}
	return (el);
}
