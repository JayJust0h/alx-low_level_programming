#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node on a certain index.
 * @head: First element of the list
 * @index: Node index to delete.
 * Return: 1 (Success), else -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *half;
	unsigned int i;

	if (!head || !*head)
		return (-1);

	if (index != 0)
	{
		for (i = 0; i + 1 < index; i++)
		{
			if (temp->next == NULL)
			{
				return (-1);
			}
			temp = temp->next;
		}
		half = temp->next->next;
		free(temp->next);
		temp->next = half;
		return (1);
	}
	else
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		return (1);
	}
}
