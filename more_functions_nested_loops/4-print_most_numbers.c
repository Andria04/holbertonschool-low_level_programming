#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char number = '0';

	while (number <= '9')
	{
		if (number != '2' && number != '4')
		{
			putchar(number);
		}
		number++;
	}
	putchar('\n');
}
