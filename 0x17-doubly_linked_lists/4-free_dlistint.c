#include "lists.h"

/**
 * free_dlistint - Free a node of a list.
 * @head: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		return;
	}
	current = head;

	while (current->next != NULL)
	{
		current = current->next;
		free(current->prev);
	}
	current->prev = NULL;
	free(current);
}
