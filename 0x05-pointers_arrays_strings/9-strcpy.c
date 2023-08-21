#include "main.h"

/**
 * char *_strcpy - copy string pointed to by src.
 * @dest: string to copy to.
 * @src: string to copy from.
 * Return: string.
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a ; b++)
	{
		dest[b] = src [b];
	}
	dest[b] = '\0';
	return (dest);

}

