#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Number.
 * @index: Index.
 * Return: Changed bit in index.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int t_binary;

	t_binary = (sizeof(*(n)) * 8);
	if (index < t_binary)
	{
		*(n) = (~(1 << index) & *(n));
		return (1);
	}
	return (-1);
}
