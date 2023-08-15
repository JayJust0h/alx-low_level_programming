#include "main.h"

/**
 * print_sign - function assigns the sign on a number
 * @n: the integer being checked
 * Return: 1 where n greater than 0 print +
 * 0 where n equals to 0 print 0 
 * -1 where n less than 0 print -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(0);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}

