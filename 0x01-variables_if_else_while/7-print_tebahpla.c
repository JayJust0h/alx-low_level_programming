#include<stdio.h>
/**
 * main - Print lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */


int main(void)

{
	char erv;

	for (erv = 'z'; erv >= 'a'; erv--)
	putchar(erv);
	putchar('\n');

	return (0);

}
