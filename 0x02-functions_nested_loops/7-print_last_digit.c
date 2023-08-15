#include <stdio.h>

/**
 * print_last_digit - Prints last digit of number.
 * @n digit to evaluate.
 * Return: value of the last digit.
 */

int print_last_digit(int)
{
	int n;
	if(n<0)
	n= -n;
	n= n % 10;
	if(n<0)
	n=-n;
	_putchar(n+'0');
	return (n);
}
