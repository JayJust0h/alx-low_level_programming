#include "main.h"

/**
 * factorial - calcilate factorial of a number.
 * @n: number to factorise.
 * Return: factorial of n.
 */

int factorial(int n)

{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
