#include "lists.h"

/**
 * insert_nodeint_at_index - insert at a given index
 * @head: pointer to the list
 * @idx
 * @n
 *
 * Description: insert a node at a given index
 * Return: node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *before;
	listint_t *new;
	unsigned int i;

	new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (before == NULL)
			return (NULL);
		before = before->next;
	}
	new->next = before->next;
	before->next = new;
	return (new);
}
