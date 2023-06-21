#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the number
 * Return: void
 */

void more_numbers(void)
{
	char count = '0';
	int number;

	while (count <= '9')
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
				putchar('1');
			putchar('0' + (number % 10));
		}
		count++;
		putchar('\n');
	}
}
