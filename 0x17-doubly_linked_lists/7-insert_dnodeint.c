#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a certain index.
 * @h: double pointer to a list
 * @idx: the index value
 * @n: value
 *
 * Description: Uses a loop to traverse through a list
 * Return: node or null
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int i;

	i = 1;
	if (idx == 0)
		new_node = add_dnodeint(h, n);
	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (*h == NULL)
	{
		return (NULL);
	}
	current = *h;
	new_node->n = n;

	while (current != NULL)
	{
		if (i == idx)
		{
			new_node->prev = current;
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			return (new_node);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
