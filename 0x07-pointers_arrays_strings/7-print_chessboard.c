#include "main.h"

/**
 * print_chessboard - Function prints chessboard.
 * @a: pointer to printing pieces.
 * Return: void.
 */

void print_chessboard(char (*a)[8])
{
	int ch, ess;

	for (ch = 0; ch < 8; ch++)
	{
		for (ess = 0; ess < 8; ess++)
		{
			_putchar(a[ch][ess]);
		}
		_putchar('\n');
	}
}

