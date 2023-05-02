#include "lists.h"

/**
 * get_nodeint_at_index - del a head a list.
 * @head: pointer to the list
 * @index: index of the node
 *
 * Description: Uses a loop to traverse through a list
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k;

	listint_t *link = head;

	for (k = 0; k < index && link != NULL; k++)
		link = link->next;
	if (!link)
		return (NULL);
	return (link);
}
