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

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		el++;
	}
	return (el);
}
