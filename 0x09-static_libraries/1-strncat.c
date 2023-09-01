#include "main.h"
#include <string.h>

/**
 * _strncat - varied 2 string concantenation.
 * @dest: destination string.
 * @src: source string.
 * @n: value being concantenated.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)

{
	int size = strlen(dest);
	int l;

	for (l = 0 ; l < n && *src != '\0' ; l++)
	{
		dest[size + l] = *src;
		src++;
	}
	dest[size + l] = '\0';
	return (dest);
}
