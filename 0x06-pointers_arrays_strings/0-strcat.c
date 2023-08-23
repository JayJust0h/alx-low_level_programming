#include "main.h"

/**
 * _strcat - Concantenates 2 strings dest and src.
 * @dest: destination string.
 * @src: source string.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)

{
	int destination = 0;
	int source = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		destination++;

	for (i = 0 ; src[i] != '\0' ; i++)
		source++;

	for (i = 0 ; i <= source ; i++)
		dest[destination + i] = src[i];

	return (dest);
}
