#include "lists.h"

/**
 * add_dnodeint - adds a new node to a list
 * @head: pointer to the begining
 * @n: Value of the node
 *
 * Description: Adds the node to the begining of the list
 * Return: dlistint_t, address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
