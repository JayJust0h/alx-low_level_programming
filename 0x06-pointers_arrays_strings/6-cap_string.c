#include "main.h"

/**
 * cap_string - Capitalize words in a string
 * @str: string to consider.
 * Return: str
 */

char *cap_string(char *str)

{
	int i =	0;

	while (str[i])
	{
		while (str[i] && !(str[i] >= 'a' && str[i] <= 'z'))
			i++;
	}
	if (str[i])
	{
		if (i == 0 || str[i - 1] == ' ' ||
		str[i - 1] == '\t' ||
		str[i - 1] == '\n' ||
		str[i - 1] == ',' ||
		str[i - 1] == ';' ||
		str[i - 1] == '.' ||
		str[i - 1] == '!' ||
		str[i - 1] == '?' ||
		str[i - 1] == '"' ||
		str[i - 1] == '(' ||
		str[i - 1] == '{' ||
		str[i - 1] == '}')
		{
		str[i] -= 32;
		}
		i++;
	}
	return (str);
}
