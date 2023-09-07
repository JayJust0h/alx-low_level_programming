#include "main.h"
#include <stdlib.h>

/**
 * array_range - create array of integers.
 * @min: the minimum value.
 * @max: te maximum value.
 * Return: pointer to allocated memory.
 */

int *array_range(int min, int max)
{
	int x = 0;
	int y = 0;
	int *a;

	if (min > max)
		return (NULL);
	y = (max - min + 1);
	a = malloc(sizeof(int) * y);
	if  (a == NULL)
		return (NULL);
	for (x = 0; x < y; x++)
	{
		a[x] = min;
		min++;

	}
	return (a);
}
