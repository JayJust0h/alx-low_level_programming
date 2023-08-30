#include "main.h"

/**
 * _strlen_recursion - Function returns length of a string.
 * @s : string being reurned.
 * Return: s.
 */

int _strlen_recursion(char *s)

{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return(0);
}
