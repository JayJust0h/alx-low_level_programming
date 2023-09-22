#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Structure of the singly linked list.
 * @str: String to allocate memory.
 * @length: Length of the string.
 * @next: Points for the next node.
 * Description: singly linked list node structure.
 * Return: 0 (success)
 */

size_t print_list(const list_t *h);
size_t list_length(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
