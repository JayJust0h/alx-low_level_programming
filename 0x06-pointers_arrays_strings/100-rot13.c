#include "main.h"

/**
 * rot13 - Function encodes string usin rot13.
 * @s: String being encoded.
 * Return: encoded string.
 */

char *rot13(char *s)

{
	int i, rot;
	char *al = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *be = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (rot = 0 ; al[rot] != '\0' ; rot++)
		{
			if (s[i] == al[rot])
			{
				s[i] = be[rot];
				break;
			}
		}
	}
	return (s);
}
