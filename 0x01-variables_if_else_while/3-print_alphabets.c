#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet in lowercase.
 * Return:Always 0 (Success)
 */

int main(void)

{
	char case;

	for (case = 'a'; case <= 'z'; case++)
	putchar(case);

	for (case = 'A'; case <= 'Z'; case++)
	putchar(case);

	putchar('\n');
	return (0);
}
