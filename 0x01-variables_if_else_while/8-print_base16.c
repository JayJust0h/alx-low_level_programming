#include<stdio.h>
/**
 * main - output  single digit numbers
 * Return: Always 0 (Success)
 */

int main(void)

{
	int digit;
	char low;

	for (digit = '0'; digit <= '9'; digit++)
	{
	putchar(digit);
	}
	for (low = 'a'; low <= 'f'; low++)
	{
	putchar(low);
	}
	putchar('\n');

	return (0);
}
