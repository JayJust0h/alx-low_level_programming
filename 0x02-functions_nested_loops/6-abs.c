#include <stdio.h>

/**
 * _abs -function computes absolute integer value.
 * @n integer whose value to determine.
 * Return: Absolute integer value
 */
int _abs(int n)

{
	if( n<=0 )

		return (-n);

	else
		return (n);
}

