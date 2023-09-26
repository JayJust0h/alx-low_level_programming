#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of linked list.
 * @head: Head of the linked list
 * @index: Index of the node, starting at 0
 * Return: Position current.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index && new; i++)
	{
		if (new->next == NULL)
			return (NULL);
		new = new->next;
	}
	return (new);
}
