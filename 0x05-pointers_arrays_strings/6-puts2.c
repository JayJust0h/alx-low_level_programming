#include "main.h"

/**
 * puts2 - Print alternating string characters.
 * new line.
 * @str: characters to be printed.
 * Return: character output.
 */

void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}
