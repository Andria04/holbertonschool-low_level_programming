#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character should be printed
 * Return: the character
 */

void print_line(int n)
{
	char s = '_';

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			putchar(s);
		}
		putchar('\n');
	}
}
