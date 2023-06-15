#include "lists.h"

/**
 * get_dnodeint_at_index - Gets a node of a list.
 * @head: pointer to a list
 * @index: the index value
 *
 * Description: Uses a loop to traverse through a list
 * Return: node or null
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;

	while (current != NULL)
	{
		i++;
		current = current->next;
		if (i == index)
			return (current);
	}
	return (NULL);
}
