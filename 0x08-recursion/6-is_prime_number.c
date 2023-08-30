#include "main.h"

/**
 * prime_a - Calculate prime number.
 * @a: input.
 * @b: number to divide by.
 * Return: 0 or 1
 */

int prime_a(int a, int b)

{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - detect if its a prime.
 * @n: the number
 * Return: 1 or 0.
 */
int is_prime_number(int n)
	{
	return (prime_a(n, 2));
	}
