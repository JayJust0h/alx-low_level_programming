#include "main.h"

/**
 * _calloc - allocates memory using calloc.
 * @nmemb: members in the array.
 * @size: size of the arrray.
 * Return: pointer to new memory position.
 */

void *_calloc(unsigned int nmemb, unsigned int size)

{
	char *output;

	if (nmemb == 0 || size == 0)
		return (NULL);
	output = calloc(nmemb, size);
	if (output == NULL)
		return (NULL);
	else
		return (output);
}
