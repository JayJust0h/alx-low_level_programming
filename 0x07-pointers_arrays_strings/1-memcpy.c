#include "main.h"

/**
 * _memcpy - Function copies memory area.
 * @n: number of bytes to be copied.
 * @src: source of the bytes.
 * @dest: destination of the bytes.
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int py;

		for (py = 0; py < n; py++)
			dest[py] = src [py];
		return (dest);
}


