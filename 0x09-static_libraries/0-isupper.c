#include "main.h"

/**
 * _isupper - Functions checks uppercase characters.
 * @c: Character being checked.
 * Return: c is uppercase return 1
 *         otherwise return 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
