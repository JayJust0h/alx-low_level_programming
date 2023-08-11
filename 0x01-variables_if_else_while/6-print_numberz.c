#include <stdio.h>

/**
 * main - Print single digit numbers using specific functions.
 * Return: Always 0 (success)
 */

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
