#include "lists.h"

/**
 * dlistint_len - counts the elements of a list.
 * @h: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: size_t, the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int el = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		el++;
	}
	return (el);
}
