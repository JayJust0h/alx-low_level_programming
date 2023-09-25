#include "lists.h"
/**
 * add_nodeint - Adds a new node at the
 * beginning of a singly linked list.
 * @head: parameter double pointer to the head
 * @n: The number of the data.
 * Return: New node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
