#include "main.h"

/**
 * _realloc - reallocates memory block using malloc.
 * @ptr: pointer to relocate.
 * @old_size: previous size of memory.
 * @new_size: new size of memory.
 * Return: pointer to newly allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t i, mem = new_size;
	char *oldpointer = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
			return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	if (new_size > old_size)
		mem = old_size;
	for (i = 0; i < mem; i++)
		p[i] = oldpointer[i];
	free(ptr);
	return (p);
}
