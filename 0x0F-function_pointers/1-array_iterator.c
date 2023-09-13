#include <stdio.h>
#include "function_pointers.h"


/**
 * array_iterator -  Executes a function given as a parameter.
 * @size: Size of the array.
 * @action: function pointer to use.
 * @array: The array.
 * Return: 0 (success).
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
