#include "main.h"
#include <string.h>
/**
 * puts_half - print one half of a string.
 * if odd print n = (length_of_the_string - 1) / 2.
 * @str: character being input
 * Return: half of the input.
 */

void puts_half(char *str)
{
	int length = strlen(str);
	int starting_index = (length - 1) / 2;
	int i;
	for (i = starting_index; i < length; i++) 
	{
		 putchar(str[i]);
	}

		 putchar('\n');
}
