#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for an integer.
 * @cmp: Pointer to the function.
 * @size: Number of elements.
 * @array: The array.
 * Return: Index a.
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
	if (cmp(array[a]) == 1)
		return (a);
	}
	return (-1);
}
