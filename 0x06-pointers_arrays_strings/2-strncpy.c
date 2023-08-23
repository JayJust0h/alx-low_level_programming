#include "main.h"

/**
 * _strncpy - Function used to copy strings.
 * @dest: Destination string.
 * @src: Source string.
 * @n : value of the string
 */

char *_strncpy(char *dest, char *src, int n)

{
	int lp;

	for (lp = 0; lp < n && src[lp] != '\0' ; lp++)
		dest[lp] = src[lp];
	while (lp < n)
	{
		dest[lp] = '\0';
		lp++;
	}
	return (dest);
}
