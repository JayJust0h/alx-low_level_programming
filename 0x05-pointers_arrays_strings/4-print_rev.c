#include "main.h"

/**
 * print_rev - Print string in reverse.
 * New line
 * @s: string to be printed.
 * Return: 0 (success)
 */

void print_rev(char *s)
{
	int longi = 0;

	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar (*s);
		s--;
	}

	_putchar('\n');

}
