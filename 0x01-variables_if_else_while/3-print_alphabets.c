#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase then in uppercase.
 * Return:Always 0 (Success)
 */

int main(void)

{
	char cs;

	for (cs = 'a'; cs <= 'z'; cs++)
	putchar(cs);

	for (cs = 'A'; cs <= 'Z'; cs++)
	putchar(cs);

	putchar('\n');
	return (0);
}
