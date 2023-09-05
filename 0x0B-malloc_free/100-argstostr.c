#include "main.h"

/**
 * argstostr - concantenates all program arguments.
 * @ac: argument count.
 * @av: argument vector.
 * Return: NULL if ac == 0 or av == NULL.pointer to a new string.
 */

char *argstostr(int ac, char **av)
{
	char *out;
	int i, j, k = 0, length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}
	length += ac;
	out = malloc(sizeof(char) * length + 1);
	if (out == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			out[k] = av[i][j];
			k++;
		}
		if (out[k] == '\0')
		{
			out[k++] = '\n';
		}
	}
	out[length] = '\0'
	return (out);
}

