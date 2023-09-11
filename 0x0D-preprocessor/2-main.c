#include <stdio.h>

/**
 * TIME - Prints name of file it was compiled from.
 * Return: 0(success).
 */

int main(void)

{
	printf("Compiled from %s\n", __FILE__);
		       return (0);
}
