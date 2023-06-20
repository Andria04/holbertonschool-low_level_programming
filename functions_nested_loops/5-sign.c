#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 * @n: the number
 * Return: 1 if n is greater 0 if n is zero, -1 o/w
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	return (0);
}