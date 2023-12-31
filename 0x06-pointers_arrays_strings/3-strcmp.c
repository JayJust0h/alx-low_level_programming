#include "main.h"

/**
 * _strcmp - function compares 2 strings.
 * @s1: First string to consider.
 * @s2: Second string to consider.
 * Return: Integer after comparison.
 */

int _strcmp(char *s1, char *s2)

{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0' ; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
				return (s1[i] - s2[i]);
			else if (s1[i] > s2[i])
				return (s1[i] - s2[i]);
		}
	}
	return (0);
}
