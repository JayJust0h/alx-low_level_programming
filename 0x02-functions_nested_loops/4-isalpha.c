#include "main.h"

/**
 * _isalpha -Function checks for letters Upper/low case.
 * @c: the character to be checked
 * Return: 1 if c is a letter.
 * 0 c is non-letter.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

