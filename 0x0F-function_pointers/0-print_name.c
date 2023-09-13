#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - Function prints name.
* @name: Name of string.
* @f: Function pointer
* Return: 0 (Success).
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;


	f(name);
}
