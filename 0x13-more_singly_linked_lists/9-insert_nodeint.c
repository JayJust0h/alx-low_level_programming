#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a specific position.
 * @head: First node in the list.
 * @index: index where the new node is added
 * @n: data to input on new node
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *node, *temp = *head, *half;
	unsigned int i;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (index == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	for (i = 0; i + 1 < index; i++)
	{
		if (temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	half = temp->next;
	temp->next = node;
	node->next = half;
	return (node);
}
