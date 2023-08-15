#include <stdio.h>

/**
 * print_last_digit - Prints last digit of number.
 * @n digit to evaluate.
 * Return: value of the last digit.
 */

int print_last_digit(int n)
{
	int d;

	if(n < 0)
	n= -n;
	d= n % 10;
	if(d< 0 )
	d= -d;
	putchar(n+'0');
	return (d);
}
