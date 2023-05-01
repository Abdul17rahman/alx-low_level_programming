#include "lists.h"

/**
 * listint_len - cals the elements of a list.
 * @h: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: size_t, the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t el = 0;

	const listint_t *link;

	link = h;

	while (link)
	{
		link = link->next;
		el++;
	}
	return (el);
}
