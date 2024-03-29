#include "lists.h"

/**
 * sum_listint - sums ele data.
 * @head: pointer to the list
 *
 * Description: Uses a loop to traverse through a list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
