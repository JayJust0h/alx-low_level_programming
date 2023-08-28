#include "main.h"

/**
 * print_diagsums - print sum of two diagonals
 * @a: Matrix of integers.
 * @size: size of matrix.
 */

void print_diagsums(int *a, int size)

{
	int i, sumv = 0, sumh = 0;

	for (i = 0; i < size; i++)
	{
		sumv += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sumh += a[i];
		a += size;
	}
	printf("%d, %d\n", sumv, sumh);
}
