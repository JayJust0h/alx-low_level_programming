#include "main.h"
#include <unistd.h>
/**
 * _putchar - write character c to stdout
 *  @c: The character being printed.
 *
 *  Return: 1 in case of no errors.
 *  On error, return -1 set errno appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
