#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal
 * @n: number of times the character is printed
 * Return: the character
 */

void print_diagonal(int n)
{
	char s = '\\';

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				putchar(' ');
			}
			putchar(s);
			putchar('\n');
		}
	}
}
