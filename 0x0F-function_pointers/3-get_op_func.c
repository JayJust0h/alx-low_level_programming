#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Select correct function for user.
 * @s: Operator argument.
 * Return: Pointer to op_add.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;

		while (ops[i].op != NULL && *(ops[i].op) != *s)
			i++;
		return (ops[i].f);
}
