#include "main.h"

/**
 * print_diagonal - draws a diagonal line in the terminal.
 * @n : number of times _ should be printed.
 * Return: 0(success).
 */

void print_diagonal(int n)
{
	int l, k;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (l = 0; l < n; l++)
	{
		for (k = 0; k < n; k++)
		{
		if (k == l)
		_putchar('\\');
		else if (k < l)

		_putchar(' ');
		}
	_putchar('\n');
	}
}
