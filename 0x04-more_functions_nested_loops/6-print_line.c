#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n : number of times _ should be printed.
 * Return: 0(success).
 */

void print_line(int n)
{
	int l;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	for (l = 1; l <= n; l++)
	{
		_putchar('_');
	}

		_putchar('\n');

}
