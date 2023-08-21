#include "main.h"

/**
 * swap_int - Function swaps value of 2 integers.
 * @x: 1st integer to swap.
 * @y: 2nd integer to swap.
 */

void swap_int(int *x, int *y)
{
	int s;
	s = *x;
	*x = *y;
	*y = s;
}
