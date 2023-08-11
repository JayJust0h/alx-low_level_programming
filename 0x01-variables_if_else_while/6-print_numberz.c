#include <stdio.h>

/**
 * Print single digit numbers using specific functions.
 * Result: Always 0 (success)
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
