#include "lists.h"

/**
 * add_nodeint - adds an element at the beginning
 * @head: Pointer to the begining of the list
 * @n: the data to be added
 *
 * Description: Uses a loop to traverse through a list
 * Return: address of the node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new = NULL;

	add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
		return (NULL);
	add_new->n = n;
	add_new->next = *head;
	*head = add_new;
	return (add_new);
}
