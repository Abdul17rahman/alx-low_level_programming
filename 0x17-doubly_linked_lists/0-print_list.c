#include "lists.h"

/**
 * print_list - Prints the elements of a list.
 * @h: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: size_t, the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int el = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		el++;
	}
	return (el);
}
