#include "main.h"

/**
 * reverse_array - reverse content of n integers
 * @a: array being reversed
 * @n: number of elements in the array
 * Return:0 on success 1 on error.
 */

void reverse_array(int *a, int n)

{
	int i;
	int t;

	for (i = 0; i < n / 2; i++)
	{
		t = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = t;
	}
}
