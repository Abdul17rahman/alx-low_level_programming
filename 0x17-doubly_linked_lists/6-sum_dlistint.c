#include "lists.h"

/**
 * sum_dlistint - sums elements of a list.
 * @head: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: 0 if empty or sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	unsigned int i;

	i = 0;

	if (head == NULL)
	{
		return (0);
	}
	current = head;

	while (current != NULL)
	{
		i += current->n;
		current = current->next;
	}
	return (i);
}
