#include "main.h"

/**
 * jack_bauer- Print day minute by minute.
 * Start at 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int hours, minutes;

	hours = 0;

	for (hours < 24; hours++)
	{
		minutes = 0;
	for  (minutes < 60; minutes++)
	{
		_putchar((hours / 10) + '0');
		_putchar((hours % 10) + '0');
		_putchar(':');
		_putchar((minutes / 10) + '0');
		_putchar((minutes / 10) + '0');
		_putchar('\n');
		hours++;
	}
	minutes++;
	}
}
