#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Function prints a name.
 * @name: Name to be printed.
 * @f: Function pointer.
 * Return: 0(success).
 */

void print_name(char *name, void (*f)(char *))

{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
