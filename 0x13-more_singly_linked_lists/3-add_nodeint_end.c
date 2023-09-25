#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the end of a list.
 * @head: Double pointer that point to the head of
 * the linked list.
 * @n: Parameter with the value of the number data.
 * Return: The new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nw, *tmp;

	tmp = *head;

	nw = malloc(sizeof(listint_t));
	if (nw == NULL)
	{
		return (NULL);
	}
	nw->n = n;
	nw->next = NULL;

	if (*head == NULL)
	{
		*head = nw;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = nw;
	}

	return (nw);
}
