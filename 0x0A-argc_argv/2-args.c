#include <stdio.h>

/**
 * main - prints all arguments received.
 * @argc: arguments count.
 * @argv: argument vector.
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc ; index++)
		printf("%s\n", argv[index]);
	return (0);
}
