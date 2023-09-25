#include "lists.h"
/**
 * print_listint - prints the elements of a listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)

{
	size_t n = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
