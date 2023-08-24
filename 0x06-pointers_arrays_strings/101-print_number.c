#include "main.h"

/**
 * print_number - function prints an integer.
 * @n: integer being printed.
 * Return: 0 (success)
 */

void print_number(int n)

{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar (45);
		a = -a;
	}
	if (a / 10)
	{
		print_number(a / 10);
	}
	_putchar(a % 10 + '0');

	
}

