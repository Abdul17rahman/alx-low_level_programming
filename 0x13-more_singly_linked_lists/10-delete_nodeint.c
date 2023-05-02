#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node
 * @head: pointer to the list
 * @index: index of the node
 *
 * Description: delete a node at a given index
 * Return: node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *before = *head;
	listint_t *new = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = (*head)->next;
		free(before);
		return (1);
	}
	while (i < index - 1)
	{
		if (!before || !(before->next))
			return (-1);
		before = before->next;
		i++;
	}
	new = before->next;
	before->next = new->next;
	free(new);
	return (1);
}
