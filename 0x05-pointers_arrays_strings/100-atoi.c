#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts string into an integer.
 * @s: string to be converted.
 * Return converted integer.
 */

int _atoi(char *s)
{
	int n = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
	{
		i++;
	
	}
while (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -sign : sign;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
	int digit = s[i] - '0';
	if (n > INT_MAX /10 || (n == INT_MAX /10 && digit > INT_MAX % 10))
	{
		return (sign == 1) ? INT_MAX : INT_MIN;
	
	}
	n = n * 10 + digit;
	i++;
	}
	return n * sign;
}
