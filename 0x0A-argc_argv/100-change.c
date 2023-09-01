#include <stdio.h>
#include <stdlib.h>

/**
 * main - print minimum number of coins for change.
 * @argc: number of arguments.
 * @argv: array holding arguments.
 * Return 0 (success).
 */

int main(int argc, char **argv)

{
	int cents, mcoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
			return (1);
	}

	cents = atoi(argv[1]);
	while (cents > 0)
	{
	if (cents >= 25)
		cents -= 25;
	if (cents >= 10)
		cents -= 10;
	if (cents >= 5)
		cents -= 5;
	if (cents >= 2)
		cents -= 2;
	if (cents >= 1)
		cents -= 1;
	mcoins += 1;
	}
	printf("%d\n", mcoins);
	return (0);
}
