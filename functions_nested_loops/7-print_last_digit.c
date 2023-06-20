#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of a number
 * @n: the number
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int leizy = n % 10;

	if (leizy < 0)
		leizy *= -1;

	_putchar(leizy + '0');

	return (leizy);
}
