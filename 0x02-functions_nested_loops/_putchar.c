#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that's used to write character c to stdout
 *  @c: The character being printed.
 *
 *  Return: 1 in case of no errors.
 *  On error, return -1 set errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
