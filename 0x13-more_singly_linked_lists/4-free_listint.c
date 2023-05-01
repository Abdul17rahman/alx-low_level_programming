#include "lists.h"

/**
 * free_listint - Frees a list.
 * @head: pointer to a list
 *
 * Description: Uses a loop to traverse through a list
 * Return: nothin
 */

void free_listint(listint_t *head)
{
	listint_t *fr;

	fr = head;

	while (fr != NULL)
	{
		fr = fr->next;
		free(head);
		head = fr;
	}
}
