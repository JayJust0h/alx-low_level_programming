#include "main.h"
#include <stdio.h>

/**
 * main - prints numbers 1 to 100.
 * Fizz repalces number for multiples of 3.
 * Buzz repalaces number for multiples of 5.
 * Return: Always 0 (Success)
 */

int  main(void)

{
	int fb;

	for (fb = 1; fb < 100; fb++)
	{
		if (fb % 3 == 0 && fb % 5 != 0)
		{
			printf("Fizz");
		}
		else if (fb % 3 == 0 && fb % 5 == 0)
		{
			printf("Buzz");
		}
		else if (fb % 3 == 0 && fb % 55 == 0)
		{
			printf("FizzBuzz");
		}
		else if (fb == 1)
		{
			printf("%d", fb);
		}
		else
		{
			printf("%d", fb);
		}
	}
	printf("\n");

	return(0);
}

