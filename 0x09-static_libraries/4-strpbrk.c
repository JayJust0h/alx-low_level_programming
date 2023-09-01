#include "main.h"

/**
 * _strpbrk - Search string for any of a set of bvtes.
 * @s: String to be searhed.
 * @accept: set of bytes.
 * Return: s on match else return null.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
