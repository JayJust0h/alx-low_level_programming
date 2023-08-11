#include<stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	int r,s;

	for (r = 0; s <= 98; r++)
	{
	for (r = s + 1; s <= 99; s++)
	{
	putchar((r / 10) + '0');
	putchar((r % 10) + '0');
	putchar(' ');
	putchar((q / 10) + '0');
	putchar((q % 10) + '0');
	if (r == 98 && s== 99)
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
