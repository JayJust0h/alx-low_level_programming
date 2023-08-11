#include <stdio.h>

/**
 * main - Printing the alphabet in lowercase wile ommiting q and e.
 *Return: Always 0 (Success)
 */

int main(void)

{
	char ABCs;

	for (ABCs = 'a'; ABCs <= 'z'; ABCs++)
	{
		if (ABCs != 'q' && ABCs != 'e';)
		{
			putchar(ABCs);
		}
	}

	putchar('\n');

	return (0);

}
