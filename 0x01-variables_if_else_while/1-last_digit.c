#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main- A program that assigns a random number to a variable after execution.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;

	printf("The number: %d\n", n);

	if (lastdigit > 5)
	{
	printf("Last digit of %d and is greater than 5\n");
	}
	else if (lastdigit == 0)
	{
	printf("Last digit of %d and is 0\n");
	}
	else
	{
	printf("Last digit of %d and is less than 6 and not 0\n");
	}
	return (0);
}
