#include "lists.h"

/**
 * add_nodeint_end - adds an element at the end
 * @head: Pointer to the begining of the list
 * @n: the data to be added
 *
 * Description: Uses a loop to traverse through a list
 * Return: address of the node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *link, *add_new;

	add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
		return (NULL);
	add_new->n = n;
	add_new->next = NULL;

	if (*head == NULL)
		*head = add_new;
	else
	{
		link = *head;

		while (link->next != NULL)
			link = link->next;
		link->next = add_new;

	}
	return (add_new);
}
