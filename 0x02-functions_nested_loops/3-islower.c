#include "main.h"

/**
 * _islower - Function checks for lowercase characters.
 * @c: is the char to be checked.
 * Return: 1 when char is lowercase.
 * Return: 0 when char != lowercase.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

