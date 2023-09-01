#include "main.h"

/**
 * _strstr - Function locates a substring.
 * Do not consider terminating null bytes.
 * @haystack: string being searched.
 * @needle: substring to be located.
 * Return: beginning of the located substring, or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		i = 0;
		j = 0;

	while (needle[j] && haystack[i] == needle[j])
	{
		i++;
		j++;
	}

	if (needle[j] == '\0')
		return (haystack);

	haystack++;
	}

	return (NULL);
}
