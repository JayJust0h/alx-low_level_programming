#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int sum = 2;

	while ((c = a + b) <= 4000000)
	{
	if (c % 2 == 0)
	{
	sum += c;
	}

	a = b;
	b = c;
	}

	printf("Sum %d\n", sum);

	return (0);
}
