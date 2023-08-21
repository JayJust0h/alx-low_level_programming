#include "main.h"

/**
 * _strlen - output length of string.
 * @str: string.
 * Return: length.
 */
int _strlen(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
			str++;
	}
		return (longi);
}
