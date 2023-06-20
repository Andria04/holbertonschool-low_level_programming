#include "main.h"
#include <stdio.h>
#include <time.h>

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			putchar('0' + hour / 10);
			putchar('0' + hour % 10);
			putchar(':');
			putchar('0' + minute / 10);
			putchar('0' + minute % 10);
			putchar('\n');
		}
	}
}
