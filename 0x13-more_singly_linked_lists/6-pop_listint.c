#include "lists.h"

/**
 * pop_listint - del a head a list.
 * @head: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: nothin
 */

int pop_listint(listint_t **head)
{
	listint_t *fr;

	int data;

	if (head == NULL)
		return (0);

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	fr = (*head)->next;
	free(*head);
	*head = fr;
	return (data);
}
