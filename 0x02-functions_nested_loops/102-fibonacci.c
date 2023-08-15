#include <stdio.h>

/**
 * main - Output first 50 Fibonacci numbers beggining at 1 and 2.
 *        comma separated then spaced.
 * Return: Always 0.(Success)
 */
int main(void)
{
	int count;
	unsigned long fbnc1 = 0, fbnc2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fbnc1 + fbnc2;
		printf("%lu", sum);

		fbnc1 = fbnc2;
		fbnc2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

