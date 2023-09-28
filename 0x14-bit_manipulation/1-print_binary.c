#include "main.h"
/**
 * print_binary - Prints binary representation of number.
 * @n: number to print
 * Return: 0 (success).
 */

void print_binary(unsigned long int n)

{
	int binary;

	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/* last bit of the number */
	binary = n & 1;
	putchar(binary + '0');
}
