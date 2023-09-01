#include "main.h"

/**
 * _isdigit -  Function checks for digit 0 to 9.
 * @c: Number being checked.
 * Return: c is digit return 1 else return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
