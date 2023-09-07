#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function alocates memory using malloc.
 * @b: size of the memory.
 * Return: pointer to memory allocated.
 */

void *malloc_checked(unsigned int b)

{
	char *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
