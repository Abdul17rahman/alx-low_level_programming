#include "lists.h"

/**
 * free_listint2 - Frees a list.
 * @head: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: nothin
 */

void free_listint2(listint_t **head)
{
	listint_t *fr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		fr = (*head)->next;
		free(*head);
		*head = fr;
	}
	*head = NULL;
}
