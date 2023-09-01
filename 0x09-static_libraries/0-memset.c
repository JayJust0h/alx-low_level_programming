#include "main.h"

/**
 * _memset - Fill memory with constant byte n.
 * @s: memory to fill with bytes.
 * @b: constant byte to use.
 * @n: number of times bytes are filled.
 * Return: pointer to point s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
		s[m] = b;
	return (s);
}
