#include "lists.h"
/**
 * free_listint -  Frees a list.
 * @head: Points to the head of the linked list.
 * Return: head.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	return ;
}
