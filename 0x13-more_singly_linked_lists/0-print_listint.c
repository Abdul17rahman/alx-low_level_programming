#include "lists.h"

/**
 * print_listint - Prints the elements of a list.
 * @h: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: size_t, the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t el = 0;

	const listint_t *link;

	link = h;

	while (link)
	{
		printf("%d\n", link->n);
		link = link->next;
		el++;
	}
	return (el);
}
