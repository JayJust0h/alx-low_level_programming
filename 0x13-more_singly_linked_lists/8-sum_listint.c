#include "lists.h"
/**
 * sum_listint - Calculates sum of all data in the list.
 * @head:  Head of the linked list.
 * Return: resulting sum.
 */
int sum_listint(listint_t *head)
{
	listint_t *new = head;
	int i = 0;

	if (head == NULL)
		return (0);
	while (new)
	{
		i += new->n;
		new = new->next;
	}
	return (i);
}
