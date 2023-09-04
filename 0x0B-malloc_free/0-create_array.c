#include "main.h"

/**
 * create_array - creates array of characters.
 * @size: size of the array.
 * @c: character to store in array.
 * Return: pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

		if (size == 0)
			return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
