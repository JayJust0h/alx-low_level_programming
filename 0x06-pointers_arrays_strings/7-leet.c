#include "main.h"

/**
 * leet - Use the leet code to encode.
 * @s: string to be encoded.
 * Return: Encoded string.
 */

char *leet(char *s)

{
	int i, moz;
	char *x = "aAeEoOtTlL";
	char *y = "4433007711";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (moz = 0 ; moz < 10 ; moz++)
		{
			if (s[i] == x[moz])
				s[i] = y[moz];
		}
	}
	return (s);
}
