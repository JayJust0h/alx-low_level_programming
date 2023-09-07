#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenate string.
 * @s1: string one.
 * @s2: string two.
 * @n: number of bytes.
 * Return: concantenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	unsigned int i;
	unsigned int lengths1 = 0;
	unsigned int lengths2 = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		lengths1++;
	for (i = 0; s2[i] != '\0'; i++)
		lengths2++;

	output = malloc(sizeof(char) * (lengths1 + n) + 1);
	if (output == NULL)
		return (NULL);
	if (n >= lengths2)
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; s2[i] != '\0'; i++)
		output[lengths1 + 1] = s2[i];
		output[lengths1 + 1] = '\0';
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
			output[i] = s1[i];
		for (i = 0; i < n; i++)
			output[lengths1 + i] = s2[i];
		output[lengths1 + i] = '\0';
	}
	return (output);
}
