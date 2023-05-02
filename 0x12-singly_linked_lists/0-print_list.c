#include "lists.h"

/**
 * print_list - Prints the elements of a list.
 * @h: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: size_t, the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int el = 0;

	const list_t *link;

	link = h;

	if (link == NULL)
		return (-1);

	while (link)
	{
		if (link->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", link->len, link->str);
		link = link->next;
		el++;
	}
	return (el);
}
