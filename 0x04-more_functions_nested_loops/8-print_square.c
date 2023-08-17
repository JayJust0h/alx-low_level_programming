#include "main.h"

/**
 * print_square - draws a square using # in the terminal.
 * @size : size of the square
 * New line.
 * Return: 0(success).
 */

void print_square(int size)
{
	int l, k;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	for (l = 0; l < size; l++)
	{
		for (k = 0; k < size; k++)
		{
		_putchar('#');
		}

		_putchar('\n');
	}
}
