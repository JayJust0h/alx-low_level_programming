#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Sum of the numbers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Difference of the numbers.
 */

int op_sub(int a, int b)
{
        return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Product of the numbers.
 */

int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: Division of the numbers.
 */

int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - Checks remainder of division.
 * @a: First number.
 * @b: Second number.
 * Return: Remainder of division.
 */

int op_mod(int a, int b)
{
        return (a % b);
}
