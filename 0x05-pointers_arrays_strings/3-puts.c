#include "main.h"

/**
 * _puts - print string.
 * new line.
 * @str: string to print.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
